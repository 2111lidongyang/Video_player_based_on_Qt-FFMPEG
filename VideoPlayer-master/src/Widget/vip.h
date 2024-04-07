#ifndef VIP_H
#define VIP_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class vip; }
QT_END_NAMESPACE

class vip : public QWidget
{
    Q_OBJECT

public:
    vip(QWidget *parent = nullptr);
    ~vip();
    bool flag = true;


private slots:



    void on_pushButton_clicked();

private:
    Ui::vip *ui;
};
#endif // VIP_H
