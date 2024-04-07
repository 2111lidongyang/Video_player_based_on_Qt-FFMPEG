/********************************************************************************
** Form generated from reading UI file 'vip.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIP_H
#define UI_VIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vip
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *vip)
    {
        if (vip->objectName().isEmpty())
            vip->setObjectName(QString::fromUtf8("vip"));
        vip->resize(827, 581);
        horizontalLayout = new QHBoxLayout(vip);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(vip);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 63 16pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF SemiBold\";"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 420, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font: 63 10pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF SemiBold\";"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 260, 131, 61));
        label->setStyleSheet(QString::fromUtf8("font: 63 12pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF SemiBold\";"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(350, 270, 191, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 320, 131, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 63 12pt \"\351\230\277\351\207\214\345\246\210\345\246\210\346\226\271\345\234\206\344\275\223 VF SemiBold\";"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(350, 330, 191, 41));

        horizontalLayout->addWidget(groupBox);


        retranslateUi(vip);

        QMetaObject::connectSlotsByName(vip);
    } // setupUi

    void retranslateUi(QWidget *vip)
    {
        vip->setWindowTitle(QCoreApplication::translate("vip", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("vip", "\345\205\205\345\200\274\347\273\255\350\264\271", nullptr));
        pushButton->setText(QCoreApplication::translate("vip", "\345\205\205\345\200\274\344\274\232\345\221\230", nullptr));
        label->setText(QCoreApplication::translate("vip", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("vip", "\345\205\205\345\200\274\345\207\240\344\270\252\346\234\210\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vip: public Ui_vip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIP_H
