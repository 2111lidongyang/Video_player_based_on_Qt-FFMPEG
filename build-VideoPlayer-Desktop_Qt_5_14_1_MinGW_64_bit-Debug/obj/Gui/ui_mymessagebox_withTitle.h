/********************************************************************************
** Form generated from reading UI file 'mymessagebox_withTitle.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMESSAGEBOX_WITHTITLE_H
#define UI_MYMESSAGEBOX_WITHTITLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMessageBox_WithTitle
{
public:
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_back;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_background;
    QVBoxLayout *verticalLayout;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu_Close;
    QWidget *widget_main;
    QVBoxLayout *verticalLayout_2;
    QLabel *lab_Title;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *lab_ico_succees;
    QLabel *lab_ico_erro;
    QLabel *lab_ico_warnning;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *lab_info;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_accept;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButto_reject;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *MyMessageBox_WithTitle)
    {
        if (MyMessageBox_WithTitle->objectName().isEmpty())
            MyMessageBox_WithTitle->setObjectName(QString::fromUtf8("MyMessageBox_WithTitle"));
        MyMessageBox_WithTitle->resize(1136, 658);
        horizontalLayout_4 = new QHBoxLayout(MyMessageBox_WithTitle);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_back = new QWidget(MyMessageBox_WithTitle);
        widget_back->setObjectName(QString::fromUtf8("widget_back"));
        widget_back->setStyleSheet(QString::fromUtf8("QWidget#widget_back\n"
"{\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"border:0px solid rgb(33, 33, 33);\n"
"margin:1px; /*\350\267\235\347\246\273\350\276\271\346\241\206\350\267\235\347\246\273*/ \n"
"}\n"
""));
        verticalLayout_5 = new QVBoxLayout(widget_back);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(23, -1, 23, -1);
        horizontalSpacer_3 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        widget_background = new QWidget(widget_back);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        widget_background->setMinimumSize(QSize(500, 210));
        widget_background->setStyleSheet(QString::fromUtf8("QWidget#widget_background\n"
"{\n"
"	border:1px solid #03091b;\n"
"	background-color: rgba(0, 0, 0, 1);\n"
"border:1px solid #cccccc;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(widget_background);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        widget_title = new QWidget(widget_background);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 32));
        widget_title->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(23, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QString::fromUtf8("widget_menu"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget_menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy2);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"image: url(:image/close_2_normal.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:hover{ \n"
"image: url(:image/close_hover.png);\n"
"border-radius:0px; \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(238, 0, 0, 128), stop:1 rgba(238, 44, 44, 255));\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{ \n"
"image: url(:image/close_hover.png);\n"
"border-radius:0px; \n"
"}\n"
""));
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widget_menu);


        verticalLayout->addWidget(widget_title);

        widget_main = new QWidget(widget_background);
        widget_main->setObjectName(QString::fromUtf8("widget_main"));
        widget_main->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget_main);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(28, 0, 26, 26);
        lab_Title = new QLabel(widget_main);
        lab_Title->setObjectName(QString::fromUtf8("lab_Title"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy3);
        lab_Title->setStyleSheet(QString::fromUtf8("font: 22px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:#ffffff;\n"
""));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lab_Title);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(18);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lab_ico_succees = new QLabel(widget_main);
        lab_ico_succees->setObjectName(QString::fromUtf8("lab_ico_succees"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lab_ico_succees->sizePolicy().hasHeightForWidth());
        lab_ico_succees->setSizePolicy(sizePolicy4);
        lab_ico_succees->setMaximumSize(QSize(38, 38));
        lab_ico_succees->setStyleSheet(QString::fromUtf8("font: 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:#666666;"));
        lab_ico_succees->setPixmap(QPixmap(QString::fromUtf8(":/image/ic-icon-success.png")));
        lab_ico_succees->setScaledContents(false);
        lab_ico_succees->setAlignment(Qt::AlignCenter);
        lab_ico_succees->setWordWrap(false);

        verticalLayout_3->addWidget(lab_ico_succees);

        lab_ico_erro = new QLabel(widget_main);
        lab_ico_erro->setObjectName(QString::fromUtf8("lab_ico_erro"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lab_ico_erro->sizePolicy().hasHeightForWidth());
        lab_ico_erro->setSizePolicy(sizePolicy5);
        lab_ico_erro->setMaximumSize(QSize(38, 38));
        lab_ico_erro->setStyleSheet(QString::fromUtf8("font: 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:#666666;"));
        lab_ico_erro->setPixmap(QPixmap(QString::fromUtf8(":/image/ic-icon-error.png")));
        lab_ico_erro->setScaledContents(false);
        lab_ico_erro->setAlignment(Qt::AlignCenter);
        lab_ico_erro->setWordWrap(false);

        verticalLayout_3->addWidget(lab_ico_erro);

        lab_ico_warnning = new QLabel(widget_main);
        lab_ico_warnning->setObjectName(QString::fromUtf8("lab_ico_warnning"));
        sizePolicy5.setHeightForWidth(lab_ico_warnning->sizePolicy().hasHeightForWidth());
        lab_ico_warnning->setSizePolicy(sizePolicy5);
        lab_ico_warnning->setMaximumSize(QSize(38, 38));
        lab_ico_warnning->setStyleSheet(QString::fromUtf8("font: 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:#666666;"));
        lab_ico_warnning->setPixmap(QPixmap(QString::fromUtf8(":/image/ic-icon-danger.png")));
        lab_ico_warnning->setScaledContents(false);
        lab_ico_warnning->setAlignment(Qt::AlignCenter);
        lab_ico_warnning->setWordWrap(false);

        verticalLayout_3->addWidget(lab_ico_warnning);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 0, -1);
        lab_info = new QLabel(widget_main);
        lab_info->setObjectName(QString::fromUtf8("lab_info"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lab_info->sizePolicy().hasHeightForWidth());
        lab_info->setSizePolicy(sizePolicy6);
        lab_info->setMinimumSize(QSize(0, 38));
        lab_info->setStyleSheet(QString::fromUtf8("font: 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:#f8f8fa;"));
        lab_info->setScaledContents(false);
        lab_info->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lab_info->setWordWrap(true);

        verticalLayout_4->addWidget(lab_info);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_accept = new QPushButton(widget_main);
        pushButton_accept->setObjectName(QString::fromUtf8("pushButton_accept"));
        pushButton_accept->setMinimumSize(QSize(82, 40));
        pushButton_accept->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_accept->setFocusPolicy(Qt::StrongFocus);
        pushButton_accept->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{ \n"
"background-color:#4b5cc4;\n"
"color: #f8f8fa;\n"
"font-size:14px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"border:1px solid #4b5cc4;\n"
"border-radius: 0px; \n"
"\n"
"} \n"
"QPushButton:hover{ \n"
"background-color:#8386bc;\n"
"} \n"
"QPushButton:pressed{ \n"
"background-color:#8386bc;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_accept->setIcon(icon);
        pushButton_accept->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(pushButton_accept);

        horizontalSpacer_4 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButto_reject = new QPushButton(widget_main);
        pushButto_reject->setObjectName(QString::fromUtf8("pushButto_reject"));
        pushButto_reject->setMinimumSize(QSize(82, 40));
        pushButto_reject->setCursor(QCursor(Qt::PointingHandCursor));
        pushButto_reject->setFocusPolicy(Qt::StrongFocus);
        pushButto_reject->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{ \n"
"background-color: #e7ecf1; \n"
"color: #333333;\n"
"font-size:14px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"border:1px solid #c8cbd3;\n"
"border-radius: 0px; \n"
"\n"
"padding: 3px;\n"
"\n"
"} \n"
"QPushButton:hover{ \n"
"background-color: #c7ccd1; \n"
"} \n"
"QPushButton:pressed{ \n"
"background-color: #c7ccd1; \n"
"}\n"
"\n"
"\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButto_reject->setIcon(icon1);
        pushButto_reject->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(pushButto_reject);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(widget_main);


        horizontalLayout_7->addWidget(widget_background);

        horizontalSpacer_2 = new QSpacerItem(331, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);


        horizontalLayout_4->addWidget(widget_back);


        retranslateUi(MyMessageBox_WithTitle);
        QObject::connect(btnMenu_Close, SIGNAL(clicked()), MyMessageBox_WithTitle, SLOT(reject()));
        QObject::connect(pushButton_accept, SIGNAL(clicked()), MyMessageBox_WithTitle, SLOT(accept()));
        QObject::connect(pushButto_reject, SIGNAL(clicked()), MyMessageBox_WithTitle, SLOT(reject()));

        QMetaObject::connectSlotsByName(MyMessageBox_WithTitle);
    } // setupUi

    void retranslateUi(QDialog *MyMessageBox_WithTitle)
    {
        MyMessageBox_WithTitle->setWindowTitle(QCoreApplication::translate("MyMessageBox_WithTitle", "Epen Teacher", nullptr));
#if QT_CONFIG(tooltip)
        btnMenu_Close->setToolTip(QCoreApplication::translate("MyMessageBox_WithTitle", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Close->setText(QString());
        lab_Title->setText(QCoreApplication::translate("MyMessageBox_WithTitle", "\346\217\220\347\244\272", nullptr));
        lab_ico_succees->setText(QString());
        lab_ico_erro->setText(QString());
        lab_ico_warnning->setText(QString());
        lab_info->setText(QCoreApplication::translate("MyMessageBox_WithTitle", "\346\217\220\347\244\272\344\277\241\346\201\257", nullptr));
        pushButton_accept->setText(QCoreApplication::translate("MyMessageBox_WithTitle", "\347\241\256\345\256\232", nullptr));
        pushButto_reject->setText(QCoreApplication::translate("MyMessageBox_WithTitle", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMessageBox_WithTitle: public Ui_MyMessageBox_WithTitle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMESSAGEBOX_WITHTITLE_H
