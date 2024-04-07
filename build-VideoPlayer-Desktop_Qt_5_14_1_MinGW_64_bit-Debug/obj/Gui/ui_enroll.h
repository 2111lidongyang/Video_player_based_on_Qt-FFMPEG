/********************************************************************************
** Form generated from reading UI file 'enroll.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLL_H
#define UI_ENROLL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enroll
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginBtn;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *closeBtn;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *passwordlabel;
    QLineEdit *accountlineEdit;
    QPushButton *enrollBtn;
    QLabel *accountlabel;
    QLineEdit *repasswordlineEdit;
    QLineEdit *passwordlineEdit;
    QLabel *repasswordlabel;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *enroll)
    {
        if (enroll->objectName().isEmpty())
            enroll->setObjectName(QString::fromUtf8("enroll"));
        enroll->resize(940, 685);
        verticalLayout = new QVBoxLayout(enroll);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(18, 18, 18, 18);
        frame_2 = new QFrame(enroll);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"	background-color: #EDD4D4;\n"
"	border-top-left-radius: 20px;\n"
"	border-top-right-radius: 20px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(18, 18, 18, 18);
        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        loginBtn = new QPushButton(frame_2);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setStyleSheet(QString::fromUtf8("font: 12 14pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF Thin\";"));

        horizontalLayout_2->addWidget(loginBtn);

        horizontalSpacer_3 = new QSpacerItem(152, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 63 16pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF SemiBold\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(151, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        closeBtn = new QPushButton(frame_2);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setStyleSheet(QString::fromUtf8("font: 12 14pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF Thin\";"));

        horizontalLayout_2->addWidget(closeBtn);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(frame_2);

        groupBox = new QGroupBox(enroll);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(".QGroupBox{\n"
"	font: 12 14pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF Thin\";\n"
"	border-top: 2px solid #EDD4D4;\n"
"	border-left: 2px solid #EDD4D4;\n"
"	border-right: 2px solid #EDD4D4;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        passwordlabel = new QLabel(widget);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        passwordlabel->setStyleSheet(QString::fromUtf8("font: 57 14pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF Medium\";"));

        gridLayout->addWidget(passwordlabel, 1, 0, 1, 1);

        accountlineEdit = new QLineEdit(widget);
        accountlineEdit->setObjectName(QString::fromUtf8("accountlineEdit"));
        accountlineEdit->setMinimumSize(QSize(260, 50));
        accountlineEdit->setStyleSheet(QString::fromUtf8(".QLineEdit{\n"
"border-radius: 6px;\n"
"border-bottom: 3px solid black;\n"
"}"));
        accountlineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(accountlineEdit, 0, 2, 1, 1);

        enrollBtn = new QPushButton(widget);
        enrollBtn->setObjectName(QString::fromUtf8("enrollBtn"));
        enrollBtn->setMinimumSize(QSize(260, 60));
        enrollBtn->setStyleSheet(QString::fromUtf8("font: 12 14pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF Thin\";\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/sources_img/\347\231\273\345\275\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        enrollBtn->setIcon(icon);
        enrollBtn->setIconSize(QSize(25, 25));

        gridLayout->addWidget(enrollBtn, 4, 2, 1, 1);

        accountlabel = new QLabel(widget);
        accountlabel->setObjectName(QString::fromUtf8("accountlabel"));
        accountlabel->setStyleSheet(QString::fromUtf8("font: 57 14pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF Medium\";"));

        gridLayout->addWidget(accountlabel, 0, 0, 1, 1);

        repasswordlineEdit = new QLineEdit(widget);
        repasswordlineEdit->setObjectName(QString::fromUtf8("repasswordlineEdit"));
        repasswordlineEdit->setMinimumSize(QSize(260, 50));
        repasswordlineEdit->setStyleSheet(QString::fromUtf8(".QLineEdit{\n"
"border-radius: 6px;\n"
"border-bottom: 3px solid black;\n"
"}"));
        repasswordlineEdit->setEchoMode(QLineEdit::Password);
        repasswordlineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(repasswordlineEdit, 2, 2, 1, 1);

        passwordlineEdit = new QLineEdit(widget);
        passwordlineEdit->setObjectName(QString::fromUtf8("passwordlineEdit"));
        passwordlineEdit->setMinimumSize(QSize(260, 50));
        passwordlineEdit->setStyleSheet(QString::fromUtf8(".QLineEdit{\n"
"border-radius: 6px;\n"
"border-bottom: 3px solid black;\n"
"}"));
        passwordlineEdit->setEchoMode(QLineEdit::Password);
        passwordlineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(passwordlineEdit, 1, 2, 1, 1);

        repasswordlabel = new QLabel(widget);
        repasswordlabel->setObjectName(QString::fromUtf8("repasswordlabel"));
        repasswordlabel->setStyleSheet(QString::fromUtf8("font: 57 14pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF Medium\";"));

        gridLayout->addWidget(repasswordlabel, 2, 0, 1, 1);

        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(761, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(frame);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        gridLayout->addWidget(frame, 3, 2, 1, 1);


        horizontalLayout_3->addWidget(widget);


        verticalLayout->addWidget(groupBox);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 10);

        retranslateUi(enroll);

        QMetaObject::connectSlotsByName(enroll);
    } // setupUi

    void retranslateUi(QWidget *enroll)
    {
        enroll->setWindowTitle(QCoreApplication::translate("enroll", "Form", nullptr));
        loginBtn->setText(QCoreApplication::translate("enroll", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("enroll", "\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        closeBtn->setText(QCoreApplication::translate("enroll", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("enroll", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        passwordlabel->setText(QCoreApplication::translate("enroll", "\345\257\206      \347\240\201\357\274\232", nullptr));
        enrollBtn->setText(QCoreApplication::translate("enroll", "\346\263\250\345\206\214", nullptr));
        accountlabel->setText(QCoreApplication::translate("enroll", "\350\264\246      \345\217\267\357\274\232", nullptr));
        repasswordlabel->setText(QCoreApplication::translate("enroll", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("enroll", "\347\224\267", nullptr));
        radioButton_2->setText(QCoreApplication::translate("enroll", "\345\245\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enroll: public Ui_enroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLL_H
