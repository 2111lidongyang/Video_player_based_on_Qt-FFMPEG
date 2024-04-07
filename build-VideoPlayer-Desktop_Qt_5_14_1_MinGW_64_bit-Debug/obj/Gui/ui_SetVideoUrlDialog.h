/********************************************************************************
** Form generated from reading UI file 'SetVideoUrlDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETVIDEOURLDIALOG_H
#define UI_SETVIDEOURLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SetVideoUrlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *lineEdit_fileUrl;
    QPushButton *pushButton_selectFile;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *SetVideoUrlDialog)
    {
        if (SetVideoUrlDialog->objectName().isEmpty())
            SetVideoUrlDialog->setObjectName(QString::fromUtf8("SetVideoUrlDialog"));
        SetVideoUrlDialog->resize(831, 133);
        verticalLayout = new QVBoxLayout(SetVideoUrlDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(SetVideoUrlDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_7 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, -1, 0);
        label_8 = new QLabel(SetVideoUrlDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        lineEdit_fileUrl = new QLineEdit(SetVideoUrlDialog);
        lineEdit_fileUrl->setObjectName(QString::fromUtf8("lineEdit_fileUrl"));
        lineEdit_fileUrl->setMinimumSize(QSize(0, 32));

        horizontalLayout_9->addWidget(lineEdit_fileUrl);

        pushButton_selectFile = new QPushButton(SetVideoUrlDialog);
        pushButton_selectFile->setObjectName(QString::fromUtf8("pushButton_selectFile"));
        pushButton_selectFile->setMinimumSize(QSize(0, 28));
        pushButton_selectFile->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_9->addWidget(pushButton_selectFile);


        verticalLayout->addLayout(horizontalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(SetVideoUrlDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 28));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(32, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(SetVideoUrlDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 28));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(SetVideoUrlDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), SetVideoUrlDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), SetVideoUrlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetVideoUrlDialog);
    } // setupUi

    void retranslateUi(QDialog *SetVideoUrlDialog)
    {
        SetVideoUrlDialog->setWindowTitle(QCoreApplication::translate("SetVideoUrlDialog", "\350\256\276\347\275\256http\345\234\260\345\235\200", nullptr));
        label_2->setText(QCoreApplication::translate("SetVideoUrlDialog", "\351\200\211\346\213\251\350\247\206\351\242\221\346\226\207\344\273\266(\346\224\257\346\214\201\347\233\264\346\216\245\350\276\223\345\205\245\347\275\221\347\273\234\345\234\260\345\235\200)", nullptr));
        label_8->setText(QCoreApplication::translate("SetVideoUrlDialog", "\350\247\206\351\242\221\345\234\260\345\235\200\357\274\232", nullptr));
        lineEdit_fileUrl->setText(QCoreApplication::translate("SetVideoUrlDialog", "rtmp://58.200.131.2:1935/livetv/hunantv", nullptr));
        pushButton_selectFile->setText(QCoreApplication::translate("SetVideoUrlDialog", "\351\200\211\346\213\251\346\234\254\345\234\260\346\226\207\344\273\266", nullptr));
        pushButton->setText(QCoreApplication::translate("SetVideoUrlDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SetVideoUrlDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetVideoUrlDialog: public Ui_SetVideoUrlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETVIDEOURLDIALOG_H
