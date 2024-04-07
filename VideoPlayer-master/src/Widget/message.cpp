#include "message.h"
#include "ui_message.h"
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
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QDateTime>
message::message(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::message)
{
    ui->setupUi(this);
    showmess();  // 显示视频相关品论


}
void message::showmess()  // 初始化用户留言函数
{
    // 1. 建立数据库连接
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC", "MyUniqueConnectionName");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("QtVideo"); //不是Database,记得别填错
    db.setUserName("root");
    db.setPassword("你的密码");
    if (!db.open()) {
        // 处理连接失败的情况
        qDebug() <<"数据库连接失败";
        return;
    }

    // 2. 执行查询
    QSqlQuery query(db);
    query.prepare("SELECT video_id, user_id, message, time FROM video_message");
    if (!query.exec()) {
        // 处理查询失败的情况
        return;
    }

    // 3. 创建并填充模型
    QStandardItemModel *model = new QStandardItemModel(0, 4, ui->tableView);
    model->setHorizontalHeaderLabels(QStringList() << "视频id" << "用户账号" << "评论" << "评论时间");

    while (query.next()) {
        QList<QStandardItem *> items;
        for (int i = 0; i < query.record().count(); ++i) {
            QStandardItem *item = new QStandardItem(query.value(i).toString());
            items.append(item);
        }
        model->appendRow(items);
    }

    // 4. 设置模型到视图
    ui->tableView->setModel(model);


    // 在你的主函数或某个初始化函数中调用这个函数：
//    setupTableViewFromDatabase(ui->tableView);
}

message::~message()
{
    delete ui;
}

void message::on_push_messageBtn_clicked()  // 写评论函数
{
    qDebug() <<"开始写评论";
    QString message = ui->messagelineEdit->text();  // 获取用户的评论
    if (message.isEmpty()) {
        qDebug() << "用户未输入评论";
        // 在这里可以添加代码来提示用户输入评论
        return;
    }

    // 1. 建立数据库连接
    QSqlDatabase db1 = QSqlDatabase::addDatabase("QODBC");
    db1.setHostName("127.0.0.1");
    db1.setPort(3306);
    db1.setDatabaseName("QtVideo"); //不是Database,记得别填错
    db1.setUserName("root");
    db1.setPassword("你的密码");
    if (db1.open())
    {
        // 3. 上传数据到 MySQL 数据库
        QSqlQuery query;
        QString videoId = "1001"; // 获取或设置 videoId 的值
        QString userId = "120099"; // 获取或设置 userId 的值
        // 创建一个QDateTime对象，并设置为当前时间
        QDateTime currentDateTime = QDateTime::currentDateTime();

        // 输出当前时间
        qDebug() << "当前时间: " << currentDateTime.toString("yyyy-MM-dd HH:mm:ss");

        query.prepare("INSERT INTO video_message (video_id, user_id, message, time) VALUES (:videoId, :userId, :message, :time)");
        query.bindValue(":videoId", videoId);
        query.bindValue(":userId", userId);
        query.bindValue(":message", message);
        query.bindValue(":time", currentDateTime.toString("yyyy-MM-dd HH:mm:ss"));

        if (!query.exec())
        {
            // 处理数据库操作失败的情况
            qDebug() << "数据库操作失败";
            db1.close();
            return;
        }

        qDebug() << "评论已成功上传到数据库";
        db1.close();
        showmess();  // 刷新数据
        return;
    }
    qDebug() <<"数据库未连接";
    return;

}

void message::on_closeBtn_clicked()
{
    this->close();
}
