/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_message
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *messagelineEdit;
    QPushButton *push_messageBtn;

    void setupUi(QWidget *message)
    {
        if (message->objectName().isEmpty())
            message->setObjectName(QString::fromUtf8("message"));
        message->resize(738, 605);
        verticalLayout_2 = new QVBoxLayout(message);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(message);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 63 12pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF SemiBold\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        closeBtn = new QPushButton(frame);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setStyleSheet(QString::fromUtf8("font: 63 11pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF SemiBold\";"));

        horizontalLayout_2->addWidget(closeBtn);


        verticalLayout_2->addWidget(frame);

        groupBox = new QGroupBox(message);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        messagelineEdit = new QLineEdit(groupBox_2);
        messagelineEdit->setObjectName(QString::fromUtf8("messagelineEdit"));
        messagelineEdit->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(messagelineEdit);

        push_messageBtn = new QPushButton(groupBox_2);
        push_messageBtn->setObjectName(QString::fromUtf8("push_messageBtn"));

        horizontalLayout->addWidget(push_messageBtn);


        verticalLayout->addWidget(groupBox_2);

        verticalLayout->setStretch(0, 9);
        verticalLayout->setStretch(1, 2);

        verticalLayout_2->addWidget(groupBox);


        retranslateUi(message);

        QMetaObject::connectSlotsByName(message);
    } // setupUi

    void retranslateUi(QWidget *message)
    {
        message->setWindowTitle(QCoreApplication::translate("message", "Form", nullptr));
        label->setText(QCoreApplication::translate("message", "\350\257\204\350\256\272", nullptr));
        closeBtn->setText(QCoreApplication::translate("message", "\345\205\263\351\227\255\351\241\265\351\235\242", nullptr));
        groupBox->setTitle(QCoreApplication::translate("message", "\350\247\206\351\242\221\350\257\204\350\256\272", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("message", "\345\206\231\350\257\204\350\256\272", nullptr));
        push_messageBtn->setText(QCoreApplication::translate("message", "\345\217\221\350\241\250\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class message: public Ui_message {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
