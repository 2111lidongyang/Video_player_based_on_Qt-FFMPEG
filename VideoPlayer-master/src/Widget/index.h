#ifndef INDEX_H
#define INDEX_H

#include <QWidget>
#include "MainWindow.h"
#include "vip.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Index; }
QT_END_NAMESPACE

class Index : public QWidget
{
    Q_OBJECT

public:
    Index(QWidget *parent = nullptr);
    ~Index();

    vip *vippage = new vip();  // 实例化一个vip界面对象指针

    void InitWindows();
    QList<QList<QString>> dbConnect();  // 定义一个获取video相关的函数
    QString user_avatar_url;
    QString user_class;  // 用户的等级
    bool flag = true;



private slots:
    void on_videolabel_linkActivated(const QString &link);

    void on_videolabel_2_linkActivated(const QString &link);

    void on_videolabel_3_linkActivated(const QString &link);

    void on_videolabel_4_linkActivated(const QString &link);

    void on_videolabel_5_linkActivated(const QString &link);

    void on_videolabel_6_linkActivated(const QString &link);

    void on_videolabel_7_linkActivated(const QString &link);

    void on_videolabel_8_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Index *ui;
};
#endif // INDEX_H
