#ifndef MANAGER_H
#define MANAGER_H

#include <QWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class manager; }
QT_END_NAMESPACE

class manager : public QWidget
{
    Q_OBJECT

public:
    manager(QWidget *parent = nullptr);
    ~manager();
    bool flag = true;
    void initmessage();
    void inituser();


private slots:

    void on_pushButton_18_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::manager *ui;
};
#endif // MANAGER_H
