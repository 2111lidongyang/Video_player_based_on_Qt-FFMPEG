#ifndef MESSAGE_H
#define MESSAGE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class message; }
QT_END_NAMESPACE

class message : public QWidget
{
    Q_OBJECT

public:
    message(QWidget *parent = nullptr);
    ~message();
    void showmess();


private slots:


    void on_push_messageBtn_clicked();

    void on_closeBtn_clicked();

private:
    Ui::message *ui;
};
#endif // MESSAGE_H
