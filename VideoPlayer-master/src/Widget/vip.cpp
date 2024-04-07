#include "index.h"
#include "ui_index.h"
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
#include "vip.h"
#include "ui_vip.h"
#include <QMessageBox>

vip::vip(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::vip)
{
    ui->setupUi(this);



}

vip::~vip()
{
    delete ui;
}



void vip::on_pushButton_clicked()  // 会员充值槽函数
{
    qDebug() <<"会员充值";
    QString user_id = ui->lineEdit->text();  // 获取用户输入的用户id
    QString day = ui->lineEdit_3->text();   // 获取用户充值几个月
    if(user_id.isEmpty()  || day.isEmpty())
    {
        qDebug() <<"请输入您的充值账号或月份";
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

        query.prepare("SELECT class FROM users WHERE user_id = :user_id LIMIT 1");
        query.bindValue(":user_id", user_id);
        if (query.exec())
        {
            while (query.next())
            {
                qDebug() << "用户存在";
                QString classes = query.value(0).toString();  // 获取用户身份
                if (classes == "1")
                {
                    // 准备SQL语句
                    query.prepare("UPDATE users SET class = :classes, timeless = :timeless WHERE user_id = :user_id");

                    // 绑定参数值
                    query.bindValue(":user_id", user_id); // 假设 user_id 是已经定义好的用户ID
                    query.bindValue(":classes", "2"); // 更新 class 字段为 "2"
                    query.bindValue(":timeless", "2024-12-31"); // 更新 timeless 字段为 "2024-12-31"

                    // 执行SQL语句
                    if (query.exec())
                    {
                        qDebug() << "会员充值成功";
                        QMessageBox::information(this, "充值成功", "会员充值已成功完成！", QMessageBox::Ok);
                        db.close();
                        return;
                    } else
                    {
                        qDebug() << "会员充值失败:";
                        QMessageBox::critical(this, "充值失败", "会员充值失败" , QMessageBox::Ok);
                        db.close();
                        return;
                    }

                }
                else
                {
                    //vip用户
                    qDebug() <<"你已经是vip了，是否续费？";
                    // 弹出询问对话框
                    int reply = QMessageBox::question(this, "续费提示", "你已经是VIP了，是否续费？",
                                                        QMessageBox::Yes | QMessageBox::No,
                                                        QMessageBox::No); // 默认按钮设置为No

                    if (reply == QMessageBox::Yes)
                    {
                        // 用户选择续费，执行续费操作
                        qDebug() << "用户选择续费";

                        query.prepare("UPDATE users SET class = :classes, timeless = :timeless WHERE user_id = :user_id");

                        // 绑定参数值
                        query.bindValue(":user_id", user_id); // 假设 user_id 是已经定义好的用户ID
                        query.bindValue(":classes", "2"); // 更新 class 字段为 "2"
                        query.bindValue(":timeless", "2025-12-31"); // 更新 timeless 字段为 "2024-12-31"

                        // 执行SQL语句
                        if (query.exec())
                        {
                            qDebug() << "会员充值成功";
                            QMessageBox::information(this, "充值成功", "会员充值已成功完成！", QMessageBox::Ok);
                            db.close();
                            return;
                        } else
                        {
                            qDebug() << "会员充值失败:";
                            QMessageBox::critical(this, "充值失败", "会员充值失败" , QMessageBox::Ok);
                            db.rollback();
                            db.close();
                            return;
                        }
                        QMessageBox::information(this, "续费成功", "VIP续费已成功完成！", QMessageBox::Ok);
                    } else
                    {
                        // 用户选择不续费或点击了取消/关闭按钮
                        qDebug() << "用户选择不续费";
                        db.close();
                        return;
                    }
                }
            }
        }
        else
        {
            qDebug() << "该用户不存在";
            QMessageBox::information(this, "error", "该用户不存在", QMessageBox::Ok);
            db.close();
            return;
        }

    }
    else
    {
        qDebug() << "数据库未打开";
        return;
    }
}
