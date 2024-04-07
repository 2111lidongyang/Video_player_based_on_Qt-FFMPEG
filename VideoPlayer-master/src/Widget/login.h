#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "manager.h"
QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QWidget
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

    bool flag = true;
    bool flag_index = true;
    manager *manapage = new manager();  // 创建一个管理界面指针对象
    void downloadImageFromUrlAndSave(const QString &urlString, const QString &savePath);
private slots:


    void on_enrollBtn_clicked();
    void on_loginBtn_clicked();

    void on_managerBtn_clicked();

private:
    Ui::login *ui;
};
#endif // LOGIN_H
