/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *managerBtn;
    QPushButton *loginBtn;
    QPushButton *enrollBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(1059, 728);
        login->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(login);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(18, 18, 18, 18);
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 57 18pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF Medium\";\n"
"background-color: #676767;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        frame_3 = new QFrame(login);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8(".QFrame{border-image: url(:/new/prefix1/sources_img/image_71.png);}\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(280, 40));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12 12pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF Thin\";"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(280, 40));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12 12pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF Thin\";"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 3, 1, 1);


        verticalLayout_2->addWidget(frame_2);

        frame = new QFrame(frame_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        managerBtn = new QPushButton(frame);
        managerBtn->setObjectName(QString::fromUtf8("managerBtn"));
        managerBtn->setMinimumSize(QSize(100, 60));
        managerBtn->setMaximumSize(QSize(100, 60));
        managerBtn->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	font: 63 12pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF SemiBold\";\n"
"border-radius: 10px;\n"
"	background-color: #286ec8;\n"
"	color: rgb(255, 255, 255);\n"
"border:1px solid rgb(100, 100,189)\n"
"}"));

        horizontalLayout->addWidget(managerBtn);

        loginBtn = new QPushButton(frame);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setMinimumSize(QSize(100, 60));
        loginBtn->setMaximumSize(QSize(100, 60));
        loginBtn->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	font: 63 12pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF SemiBold\";\n"
"border-radius: 10px;\n"
"	background-color: #00B14F;\n"
"	color: rgb(255, 255, 255);\n"
"border:1px solid rgb(100, 100,189)\n"
"}"));

        horizontalLayout->addWidget(loginBtn);

        enrollBtn = new QPushButton(frame);
        enrollBtn->setObjectName(QString::fromUtf8("enrollBtn"));
        enrollBtn->setMinimumSize(QSize(100, 50));
        enrollBtn->setMaximumSize(QSize(16777215, 16777215));
        enrollBtn->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	font: 63 12pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF SemiBold\";\n"
"	color: rgb(0, 0, 0);\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(enrollBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(frame);


        verticalLayout->addWidget(frame_3);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 8);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        label->setText(QCoreApplication::translate("login", "\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        managerBtn->setText(QCoreApplication::translate("login", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        loginBtn->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        enrollBtn->setText(QCoreApplication::translate("login", "\345\216\273\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
