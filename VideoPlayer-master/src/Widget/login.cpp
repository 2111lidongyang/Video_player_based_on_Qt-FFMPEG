#include "index.h"
#include "ui_index.h"
#include "login.h"
#include "ui_login.h"
#include "enroll.h"
#include "ui_enroll.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QDebug>
#include <QNetworkReply>
#include <QFile>
#include <QBuffer>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QList>
#include "manager.h"
#include <QMessageBox>

login::login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

    connect(ui->enrollBtn, &QPushButton::clicked, this, &login::on_enrollBtn_clicked);

}

login::~login()
{
    delete ui;
}
void login::on_loginBtn_clicked()  // 用户登录函数
{
    if(flag_index == true)
    {
        flag_index = false;
        qDebug() <<"用户登录";
        QString useraccount = ui->lineEdit->text();
        QString userpwd = ui->lineEdit_2->text();

        if (useraccount.isEmpty() || userpwd.isEmpty())
        {
            // 如果 useraccount 或 userpwd 中有一个为空
            qDebug() << "用户名或密码为空";
            return;
        }
        else
        {
            // 如果 useraccount 和 userpwd 都不为空
            qDebug() << "开始登录";
            QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
            db.setHostName("127.0.0.1");
            db.setPort(3306);
            db.setDatabaseName("QtVideo"); //不是Database,记得别填错，是你QODBC填的名称
            db.setUserName("root");
            db.setPassword("你的密码");
            bool ok = db.open();
            if (ok)  //判断是否打开数据库
            {
                QSqlQuery query;
                query.prepare("SELECT user_id, user_pwd, class, user_avatar_url FROM users WHERE user_id = :user_id AND user_pwd = :user_pwd");
                query.bindValue(":user_id", useraccount);
                query.bindValue(":user_pwd", userpwd);

                if (query.exec()) {
                    while (query.next()) {
                        qDebug() << "user_avatar_url:" << query.value(3).toString();
                    }

                    // 如果查询到了数据，说明登录成功
                    if (query.previous()) { // 使用previous()回到结果集的最后一行
                        qDebug() << "登录成功";
                        QString user_class = query.value(2).toString();
                        QString user_avatar_url = query.value(3).toString();
                        downloadImageFromUrlAndSave(user_avatar_url, "avatar.png");  // 下载图片

                        Index *indexpage = new Index();
                        indexpage->user_avatar_url = user_avatar_url;
                        indexpage->user_class = user_class;
                        this->close();
                        indexpage->show();
                    } else {
                        qDebug() << "登录失败：未找到匹配的用户";
                        QMessageBox::critical(this, "登录失败", "该账号不存在" , QMessageBox::Ok);
                    }
                } else {
                    qDebug() << "查询执行失败：";
                }

                // 最后关闭数据库连接（如果你没有在其他地方管理这个）
                db.close();
            }

            else
            {
                qDebug()<<"error open database because";
                return;
            }
       }
     }
}

void login::downloadImageFromUrlAndSave(const QString &urlString, const QString &savePath) {
    QNetworkAccessManager manager;
    QUrl url(urlString);
    QNetworkRequest request(url);

    QNetworkReply *reply = manager.get(request);
    QObject::connect(reply, &QNetworkReply::finished, [reply, savePath]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray imageData = reply->readAll();

            // 保存图片到本地文件
            QFile file(savePath);
            if (file.open(QIODevice::WriteOnly)) {
                file.write(imageData);
                file.close();
                qDebug() << "Image saved successfully to" << savePath;
            } else {
                qDebug() << "Error opening file for writing:" << file.errorString();
            }
        } else {
            qDebug() << "Error occurred:" << reply->errorString();
        }
        reply->deleteLater();
    });

    // 等待请求完成（这仍然会阻塞事件循环，不推荐在UI线程中使用）
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();
}

void login::on_enrollBtn_clicked()
{
    if (flag == true)
    {
        qDebug() <<"用户注册";
        enroll *enrollpage = new enroll();
        enrollpage->show();
        this->close();
        flag = false;
    }
    return;

}


void login::on_managerBtn_clicked()  // 管理员登录
{
    QString id = ui->lineEdit->text();
    QString pwd = ui->lineEdit_2->text();
    if (id.isEmpty() || pwd.isEmpty())
    {
        // 如果 useraccount 或 userpwd 中有一个为空
        qDebug() << "用户名或密码为空";
        return;
    }
    qDebug() << "开始登录";
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("QtVideo"); //不是Database,记得别填错
    db.setUserName("root");
    db.setPassword("你的密码");
    bool ok = db.open();
    if (ok)  //判断是否打开数据库
    {
        QSqlQuery query;

        query.prepare("SELECT * FROM manager WHERE id = :id AND pwd = :pwd");
        query.bindValue(":id", id);
        query.bindValue(":pwd", pwd);
        if (query.exec() && query.next())  // 如果存在数据，那么说明登录成功
        {
            qDebug() << "登录成功";
            db.close();
            manapage->show();  // 管理界面
            this->close();
            return;

        }
        else
        {
            qDebug() << "该用户不存在或账号密码错误";
            db.close();
            QMessageBox::critical(this, "登录失败", "不存在管理员账号" , QMessageBox::Ok);
            return;
        }
    }
    else
    {
        qDebug()<<"error open database because";
        return;
    }

}
