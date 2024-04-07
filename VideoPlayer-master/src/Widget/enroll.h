#ifndef ENROLL_H
#define ENROLL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class enroll; }
QT_END_NAMESPACE

class enroll : public QWidget
{
    Q_OBJECT

public:
    enroll(QWidget *parent = nullptr);
    ~enroll();
    bool flag = true;


private slots:


    void on_enrollBtn_clicked();

    void on_loginBtn_clicked();

private:
    Ui::enroll *ui;
};
#endif // ENROLL_H
