#include "index.h"
#include "ui_index.h"
#include "ui_login.h"
#include "enroll.h"
#include "ui_enroll.h"
#include "login.h"
#include "ui_login.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QDebug>
#include <QNetworkReply>
#include <QFile>
#include <QBuffer>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QStringList>
#include <QRandomGenerator>

enroll::enroll(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::enroll)
{
    ui->setupUi(this);
    connect(ui->enrollBtn, &QPushButton::clicked, this, &enroll::on_enrollBtn_clicked);  // 连接注册槽行数
    connect(ui->loginBtn, &QPushButton::clicked, this, &enroll::on_loginBtn_clicked);  // 连接登录界面跳转槽函数



}

enroll::~enroll()
{
    delete ui;
}


void enroll::on_enrollBtn_clicked()  // 注册函数
{   if (flag == true)
    {
        QString useraccount = ui->accountlineEdit->text();  // 获取用户输入的账号
        QString userpwd = ui->passwordlineEdit->text();  // 获取用户输入的密码
        QString reuserpwd = ui->repasswordlineEdit->text();  // 获取用户输入的确认密码
        QString gender;
        if (ui->radioButton->isChecked())
        {
            gender = "男";
        }
        else if(ui->radioButton_2->isChecked())
        {
            gender = "女";
        }
        else
        {
            qDebug() <<"请选择性别";
            return;
        }
        if (useraccount.isEmpty() || userpwd.isEmpty() || reuserpwd.isEmpty())
        {
            // 如果 useraccount 或 userpwd 中有一个为空
            qDebug() << "请输入完整用户信息";
            return;
        }
        else if(userpwd != reuserpwd)
        {
            qDebug() <<"两次输入的密码不一致，请重新输入密码";
            return;
        }
        else
        {
            qDebug() <<"注册开始";
            QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // 连接数据库
            db.setHostName("127.0.0.1");
            db.setPort(3306);
            db.setDatabaseName("QtVideo");
            db.setUserName("root");
            db.setPassword("你的密码");
            bool ok = db.open();
            if (ok)  //判断是否打开数据库
            {
                QSqlQuery query;

                query.exec("SELECT user_id FROM users WHERE user_id := user_id"); // 查询视频链接和视频封面链接
                query.bindValue(":user_id", useraccount);
                while (query.next())  // 如果该用户已注册
                {
                    qDebug() << "该账号已注册";
                    db.close();
                    return;
                }
                qDebug() << "无该用户，开始注册";
                QStringList avatarUrlList = {
                       "http://43.143.229.40:9000/blog/dog2.jpg",
                       "http://43.143.229.40:9000/blog/dog3.jpg",
                       "http://43.143.229.40:9000/blog/dog4.jpg",
                       "http://43.143.229.40:9000/blog/dog5.jpg",
                       "http://43.143.229.40:9000/blog/dog6.jpg",
                       "http://43.143.229.40:9000/blog/dog7.jpg"
                   };
                int randomIndex = QRandomGenerator::global()->bounded(avatarUrlList.size());

                        // 获取随机索引对应的元素
                QString randomUrl = avatarUrlList.at(randomIndex);
                qDebug() <<"user_avatar_url:"<< randomUrl;
                query.prepare("INSERT INTO users (user_id, user_pwd, class, user_avatar_url, gender, timeless) VALUES (:user_id, :user_pwd, :class, :user_avatar_url, :gender, :timeless)");
                query.bindValue(":user_id", useraccount);
                query.bindValue(":user_pwd", userpwd);
                query.bindValue(":class", "1");
                query.bindValue(":user_avatar_url", randomUrl);
                query.bindValue(":gender", gender);
                query.bindValue(":timeless", "0");
                if (query.exec())  // 执行插入操作
                {
                    qDebug() << "注册成功";
                    // 可以在这里添加注册成功后的逻辑
                    db.commit();
                    db.close();
                    return;
                }
                else
                {
                    qDebug() << "注册失败:" ;
                    // 可以在这里处理注册失败的情况
                    db.rollback();
                    db.close();
                    return;
                }
            }
            else
            {
                qDebug()<<"error open database because";
                return;

            }
        }
    }
    else
    {
        return;
    }



}

void enroll::on_loginBtn_clicked()
{
    qDebug() <<"跳转到登录界面";
    this->close();
    login *loginpage = new login();
    loginpage->show();  // 开启登录界面
    this->close();  // 关闭这个注册界面
}
