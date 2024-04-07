/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manager
{
public:
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_18;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_2;
    QTableView *tableView;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_17;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer_3;
    QTableView *tableView_2;

    void setupUi(QWidget *manager)
    {
        if (manager->objectName().isEmpty())
            manager->setObjectName(QString::fromUtf8("manager"));
        manager->resize(1077, 630);
        horizontalLayout_3 = new QHBoxLayout(manager);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tabWidget = new QTabWidget(manager);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(200, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 161, 508));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(24);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_18 = new QPushButton(layoutWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));

        verticalLayout_3->addWidget(pushButton_18);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFrame(true);
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setDragEnabled(true);
        lineEdit->setClearButtonEnabled(true);

        verticalLayout_3->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_3->addWidget(pushButton_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_2->addWidget(frame);

        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setAutoScrollMargin(16);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView->setTextElideMode(Qt::ElideRight);
        tableView->setSortingEnabled(true);
        tableView->setCornerButtonEnabled(true);
        tableView->horizontalHeader()->setMinimumSectionSize(40);
        tableView->horizontalHeader()->setDefaultSectionSize(120);
        tableView->verticalHeader()->setDefaultSectionSize(40);

        horizontalLayout_2->addWidget(tableView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setEnabled(true);
        horizontalLayout = new QHBoxLayout(tab_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_2 = new QFrame(tab_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(200, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        layoutWidget_2 = new QWidget(frame_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 20, 161, 307));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setSpacing(24);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_17 = new QPushButton(layoutWidget_2);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));

        verticalLayout_4->addWidget(pushButton_17);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFrame(true);
        lineEdit_3->setEchoMode(QLineEdit::Normal);
        lineEdit_3->setDragEnabled(true);
        lineEdit_3->setClearButtonEnabled(true);

        verticalLayout_4->addWidget(lineEdit_3);

        pushButton_8 = new QPushButton(layoutWidget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_4->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(layoutWidget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_4->addWidget(pushButton_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(frame_2);

        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_2->setAlternatingRowColors(true);
        tableView_2->setSortingEnabled(true);
        tableView_2->horizontalHeader()->setDefaultSectionSize(150);
        tableView_2->verticalHeader()->setDefaultSectionSize(40);

        horizontalLayout->addWidget(tableView_2);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_3->addWidget(tabWidget);


        retranslateUi(manager);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(manager);
    } // setupUi

    void retranslateUi(QWidget *manager)
    {
        manager->setWindowTitle(QCoreApplication::translate("manager", "Form", nullptr));
        pushButton_18->setText(QCoreApplication::translate("manager", "\350\277\224\345\233\236", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("manager", "\350\247\206\351\242\221id", nullptr));
        pushButton->setText(QCoreApplication::translate("manager", "\346\237\245\350\257\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("manager", "\345\210\240\351\231\244", nullptr));
        pushButton_5->setText(QCoreApplication::translate("manager", "\346\217\220\344\272\244\344\277\256\346\224\271/\345\210\267\346\226\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("manager", "\350\247\206\351\242\221\347\225\231\350\250\200", nullptr));
        pushButton_17->setText(QCoreApplication::translate("manager", "\350\277\224\345\233\236", nullptr));
        lineEdit_3->setInputMask(QString());
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("manager", "\347\224\250\346\210\267ID", nullptr));
        pushButton_8->setText(QCoreApplication::translate("manager", "\346\237\245\350\257\242", nullptr));
        pushButton_7->setText(QCoreApplication::translate("manager", "\345\210\240\351\231\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("manager", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manager: public Ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
