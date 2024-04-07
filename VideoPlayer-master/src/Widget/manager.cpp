
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
#include "manager.h"
#include "ui_manager.h"
#include "login.h"
#include <QStandardItemModel>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QMessageBox>
manager::manager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::manager)
{
    ui->setupUi(this);
    connect(ui->pushButton_18, &QPushButton::clicked, this, &manager::on_pushButton_18_clicked);
    connect(ui->pushButton_17, &QPushButton::clicked, this, &manager::on_pushButton_18_clicked);
    inituser();  // 初始化用户信息
    initmessage();  // 初始化留言



}

manager::~manager()
{
    delete ui;
}


void manager::initmessage()
{
    qDebug() <<"初始化视频信息";
    // 1. 建立数据库连接
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC", "showallmessage");
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
    query.prepare("SELECT video_id, user_id, message, time FROM video_message LIMIT 6");
    if (!query.exec()) {
        // 处理查询失败的情况
        db.close();
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
//    db.close();


    // 在你的主函数或某个初始化函数中调用这个函数：
//    setupTableViewFromDatabase(ui->tableView);
}

void manager::inituser()
{
    qDebug() <<"显示用户数据";
    // 1. 建立数据库连接
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC", "showallmessage");
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
    query.prepare("SELECT user_id, user_pwd, class, gender, timeless FROM users LIMIT 6");
    if (!query.exec()) {
        // 处理查询失败的情况
        db.close();
        return;
    }

    // 3. 创建并填充模型
    QStandardItemModel *model = new QStandardItemModel(0, 4, ui->tableView_2);
    model->setHorizontalHeaderLabels(QStringList() << "用户账号" << "用户密码" << "用户等级" << "用户性别" << "会员过期时间");

    while (query.next()) {
        QList<QStandardItem *> items;
        for (int i = 0; i < query.record().count(); ++i) {
            QStandardItem *item = new QStandardItem(query.value(i).toString());
            items.append(item);
        }
        model->appendRow(items);
    }

    // 4. 设置模型到视图
    ui->tableView_2->setModel(model);
    db.close();

}

void manager::on_pushButton_18_clicked()  // 管理员返回登录
{
    if (flag == true)
    {
        this->close();
        flag = false;
        login *loginpage = new login();
        loginpage->show();  // 返回登录界面
    }

}

void manager::on_pushButton_clicked()  // 通过视频id查询视频留言
{
    qDebug() <<"查询";
    QString video_id = ui->lineEdit->text();
    if (video_id.isEmpty())
    {
        qDebug() <<"请输入查询的视频id";
        return;
    }
    // 1. 建立数据库连接
    QSqlDatabase db2 = QSqlDatabase::addDatabase("QODBC");
    db2.setHostName("127.0.0.1");
    db2.setPort(3306);
    db2.setDatabaseName("QtVideo"); //不是Database,记得别填错
    db2.setUserName("root");
    db2.setPassword("你的密码");
    if (!db2.open()) {
        // 处理连接失败的情况
        qDebug() <<"数据库连接失败";
        return;
    }

    // 2. 执行查询
    QSqlQuery query1(db2);
    query1.prepare("SELECT video_id, user_id, message, time FROM video_message WHERE video_id = :video_id");
    query1.bindValue(":video_id", video_id);
    if (!query1.exec()) {
        // 处理查询失败的情况
        db2.close();
        return;
    }

    // 3. 创建并填充模型
    QStandardItemModel *model = new QStandardItemModel(0, 4, ui->tableView);
    model->setHorizontalHeaderLabels(QStringList() << "视频id" << "用户账号" << "留言" << "时间");

    while (query1.next()) {
        QList<QStandardItem *> items;
        for (int i = 0; i < query1.record().count(); ++i) {
            QStandardItem *item = new QStandardItem(query1.value(i).toString());
            items.append(item);
        }
        model->appendRow(items);

    }

    // 4. 设置模型到视图
    ui->tableView->setModel(model);
    db2.close();

}

void manager::on_pushButton_3_clicked()  // 留言删除
{

    // 获取选定单元格的行号
    int curRow = ui->tableView->currentIndex().row();

    // 获取模型
    QAbstractItemModel *model = ui->tableView->model();

    // 存储该行的所有数据
    QList<QString> rowData;

    // 遍历该行的所有列，获取每一列的数据
    for (int column = 0; column < model->columnCount(); ++column) {
        QModelIndex index = model->index(curRow, column);
        QVariant data = model->data(index);

        // 将数据转换为字符串并存储
        QString cellData = data.toString();
        rowData.append(cellData);
    }

     QString user_id = rowData[1];
     qDebug() <<user_id;

    int ok=QMessageBox::warning(this,"delete","确定要删除吗？",
                                QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::No)
    {
        qDebug() <<"取消删除";
        return;
    }
    else
    {
         qDebug() <<"删除留言";
         QSqlDatabase db2 = QSqlDatabase::addDatabase("QODBC", "test");
         db2.setHostName("127.0.0.1");
         db2.setPort(3306);
         db2.setDatabaseName("QtVideo");
         db2.setUserName("root");
         db2.setPassword("你的密码");
         if (!db2.open())
         {
             // 处理连接失败的情况
             qDebug() <<"数据库连接失败";
             return;
         }
         qDebug() << "开始删除";
         QSqlQuery query(db2);
         query.prepare("DELETE FROM video_message WHERE user_id = :user_id");
         query.bindValue(":user_id", user_id);
         if (query.exec())
         {
             qDebug() << "删除成功！！！";
             db2.close();
             QMessageBox::information(this,"删除成功","删除成功！",
                                             QMessageBox::Yes);
             initmessage();

             return;
         }


    }

}

void manager::on_pushButton_8_clicked()   // 通过user_id 查询用户信息
{
    qDebug() <<"查询";
    QString user_id = ui->lineEdit_3->text();
    if (user_id.isEmpty())
    {
        qDebug() <<"请输入查询的用户id";
        return;
    }
    // 1. 建立数据库连接
    QSqlDatabase db2 = QSqlDatabase::addDatabase("QODBC");
    db2.setHostName("127.0.0.1");
    db2.setPort(3306);
    db2.setDatabaseName("QtVideo"); //不是Database,记得别填错
    db2.setUserName("root");
    db2.setPassword("你的密码");
    if (!db2.open()) {
        // 处理连接失败的情况
        qDebug() <<"数据库连接失败";
        return;
    }

    // 2. 执行查询
    QSqlQuery query1(db2);
    query1.prepare("SELECT user_id, user_pwd, class, gender, timeless FROM users WHERE user_id = :user_id");
    query1.bindValue(":user_id", user_id);
    if (!query1.exec()) {
        // 处理查询失败的情况
        db2.close();
        return;
    }

    // 3. 创建并填充模型
    QStandardItemModel *model = new QStandardItemModel(0, 4, ui->tableView);
    model->setHorizontalHeaderLabels(QStringList() << "用户账号" << "用户密码" << "用户类别" << "用户性别" <<"会员到期时间");

    while (query1.next()) {
        QList<QStandardItem *> items;
        for (int i = 0; i < query1.record().count(); ++i) {
            QStandardItem *item = new QStandardItem(query1.value(i).toString());
            items.append(item);
        }
        model->appendRow(items);

    }

    // 4. 设置模型到视图
    ui->tableView_2->setModel(model);
    db2.close();
}

void manager::on_pushButton_7_clicked()  // 用户删除
{
    // 获取选定单元格的行号
    int curRow = ui->tableView_2->currentIndex().row();

    // 获取模型
    QAbstractItemModel *model = ui->tableView_2->model();

    // 存储该行的所有数据
    QList<QString> rowData;

    // 遍历该行的所有列，获取每一列的数据
    for (int column = 0; column < model->columnCount(); ++column) {
        QModelIndex index = model->index(curRow, column);
        QVariant data = model->data(index);

        // 将数据转换为字符串并存储
        QString cellData = data.toString();
        rowData.append(cellData);
    }

     QString user_id = rowData[1];
     qDebug() <<user_id;

    int ok=QMessageBox::warning(this,"delete","确定要删除吗？",
                                QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::No)
    {
        qDebug() <<"取消删除";
        return;
    }
    else
    {
         qDebug() <<"删除留言";
         QSqlDatabase db2 = QSqlDatabase::addDatabase("QODBC", "test");
         db2.setHostName("127.0.0.1");
         db2.setPort(3306);
         db2.setDatabaseName("QtVideo");
         db2.setUserName("root");
         db2.setPassword("你的密码");
         if (!db2.open())
         {
             // 处理连接失败的情况
             qDebug() <<"数据库连接失败";
             return;
         }
         qDebug() << "开始删除";
         QSqlQuery query(db2);
         query.prepare("DELETE FROM users WHERE user_id = :user_id");
         query.bindValue(":user_id", user_id);
         if (query.exec())
         {
             qDebug() << "删除成功！！！";
             db2.close();
             QMessageBox::information(this,"删除成功","删除成功！",
                                             QMessageBox::Yes);
             inituser();

             return;
         }


    }

}
