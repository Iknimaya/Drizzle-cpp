/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
//#include <components/qlogbrowser.h>
//#include <components/terminal.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_11;
    QTreeWidget *treeWidget_mainMenu;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_11;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_pool;
    QComboBox *comboBox_coin;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_miner;
    QLineEdit *lineEdit_account;
    QPushButton *pushButton_start;
    QTabWidget *tabWidget;
    QWidget *tab_overview;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_balance_prefix;
    QLabel *label_balance;
    QWidget *tab_priceTracking;
    QGridLayout *gridLayout_5;
    QTableView *tableView_price;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLabel *label_revenue;
    QPushButton *pushButton_updateMarket;
    QWidget *tab_2;
    QGridLayout *gridLayout_7;
    QTableView *tableView_gpu;
    QWidget *tab_3;
    QGridLayout *gridLayout_8;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_9;
//    Terminal *terminal_ergo;
    QWidget *tab_5;
    QGridLayout *gridLayout_10;
//    Terminal *terminal_cardano;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
//    QLogBrowser *tabWidget_logbrowser;
    QWidget *tab_help;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEdit_firoAccount;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_ergoAccount;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_2;
    QGridLayout *gridLayout_12;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QGridLayout *gridLayout_13;
//    Terminal *terminal_freqtrade;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(940, 645);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        treeWidget_mainMenu = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget_mainMenu->setHeaderItem(__qtreewidgetitem);
        treeWidget_mainMenu->setObjectName(QString::fromUtf8("treeWidget_mainMenu"));
        treeWidget_mainMenu->setMinimumSize(QSize(150, 0));
        treeWidget_mainMenu->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_11->addWidget(treeWidget_mainMenu);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(750, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_11 = new QGridLayout(page);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_pool = new QComboBox(page);
        comboBox_pool->setObjectName(QString::fromUtf8("comboBox_pool"));
        comboBox_pool->setMinimumSize(QSize(80, 0));
        QFont font;
        font.setPointSize(9);
        comboBox_pool->setFont(font);

        horizontalLayout->addWidget(comboBox_pool);


        horizontalLayout_3->addLayout(horizontalLayout);

        comboBox_coin = new QComboBox(page);
        comboBox_coin->setObjectName(QString::fromUtf8("comboBox_coin"));
        comboBox_coin->setMinimumSize(QSize(40, 0));

        horizontalLayout_3->addWidget(comboBox_coin);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox_miner = new QComboBox(page);
        comboBox_miner->setObjectName(QString::fromUtf8("comboBox_miner"));
        comboBox_miner->setMinimumSize(QSize(40, 0));

        horizontalLayout_2->addWidget(comboBox_miner);

        lineEdit_account = new QLineEdit(page);
        lineEdit_account->setObjectName(QString::fromUtf8("lineEdit_account"));

        horizontalLayout_2->addWidget(lineEdit_account);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        pushButton_start = new QPushButton(page);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setPointSize(12);
        pushButton_start->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_start);


        verticalLayout->addLayout(horizontalLayout_3);

        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setFont(font1);
        tab_overview = new QWidget();
        tab_overview->setObjectName(QString::fromUtf8("tab_overview"));
        gridLayout_2 = new QGridLayout(tab_overview);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView = new QTableView(tab_overview);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_balance_prefix = new QLabel(tab_overview);
        label_balance_prefix->setObjectName(QString::fromUtf8("label_balance_prefix"));

        horizontalLayout_4->addWidget(label_balance_prefix);

        label_balance = new QLabel(tab_overview);
        label_balance->setObjectName(QString::fromUtf8("label_balance"));

        horizontalLayout_4->addWidget(label_balance);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        tabWidget->addTab(tab_overview, QString());
        tab_priceTracking = new QWidget();
        tab_priceTracking->setObjectName(QString::fromUtf8("tab_priceTracking"));
        gridLayout_5 = new QGridLayout(tab_priceTracking);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tableView_price = new QTableView(tab_priceTracking);
        tableView_price->setObjectName(QString::fromUtf8("tableView_price"));

        gridLayout_5->addWidget(tableView_price, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(tab_priceTracking);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        label_revenue = new QLabel(tab_priceTracking);
        label_revenue->setObjectName(QString::fromUtf8("label_revenue"));

        horizontalLayout_9->addWidget(label_revenue);

        pushButton_updateMarket = new QPushButton(tab_priceTracking);
        pushButton_updateMarket->setObjectName(QString::fromUtf8("pushButton_updateMarket"));

        horizontalLayout_9->addWidget(pushButton_updateMarket);


        gridLayout_5->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        tabWidget->addTab(tab_priceTracking, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_7 = new QGridLayout(tab_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tableView_gpu = new QTableView(tab_2);
        tableView_gpu->setObjectName(QString::fromUtf8("tableView_gpu"));

        gridLayout_7->addWidget(tableView_gpu, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_8 = new QGridLayout(tab_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        tabWidget_2 = new QTabWidget(tab_3);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_9 = new QGridLayout(tab_4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
//        terminal_ergo = new Terminal(tab_4);
//        terminal_ergo->setObjectName(QString::fromUtf8("terminal_ergo"));

//        gridLayout_9->addWidget(terminal_ergo, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_10 = new QGridLayout(tab_5);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
//        terminal_cardano = new Terminal(tab_5);
//        terminal_cardano->setObjectName(QString::fromUtf8("terminal_cardano"));

//        gridLayout_10->addWidget(terminal_cardano, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_5, QString());

        gridLayout_8->addWidget(tabWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);

//        tabWidget_logbrowser = new QLogBrowser(tab);
//        tabWidget_logbrowser->setObjectName(QString::fromUtf8("tabWidget_logbrowser"));

//        gridLayout_6->addWidget(tabWidget_logbrowser, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_help = new QWidget();
        tab_help->setObjectName(QString::fromUtf8("tab_help"));
        gridLayout_4 = new QGridLayout(tab_help);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(tab_help);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(0, 50));
        label_9->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(label_9);

        lineEdit_firoAccount = new QLineEdit(tab_help);
        lineEdit_firoAccount->setObjectName(QString::fromUtf8("lineEdit_firoAccount"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_firoAccount->sizePolicy().hasHeightForWidth());
        lineEdit_firoAccount->setSizePolicy(sizePolicy1);
        lineEdit_firoAccount->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_firoAccount);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(tab_help);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(0, 50));
        label_10->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_10->addWidget(label_10);

        lineEdit_ergoAccount = new QLineEdit(tab_help);
        lineEdit_ergoAccount->setObjectName(QString::fromUtf8("lineEdit_ergoAccount"));
        sizePolicy1.setHeightForWidth(lineEdit_ergoAccount->sizePolicy().hasHeightForWidth());
        lineEdit_ergoAccount->setSizePolicy(sizePolicy1);
        lineEdit_ergoAccount->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEdit_ergoAccount);


        verticalLayout_2->addLayout(horizontalLayout_10);


        gridLayout_4->addLayout(verticalLayout_2, 1, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_3, 2, 2, 1, 1);

        tabWidget->addTab(tab_help, QString());

        verticalLayout->addWidget(tabWidget);


        gridLayout_11->addLayout(verticalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_12 = new QGridLayout(page_2);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        tabWidget_3 = new QTabWidget(page_2);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setFont(font1);
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_13 = new QGridLayout(tab_6);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
//        terminal_freqtrade = new Terminal(tab_6);
//        terminal_freqtrade->setObjectName(QString::fromUtf8("terminal_freqtrade"));

//        gridLayout_13->addWidget(terminal_freqtrade, 0, 0, 1, 1);

        tabWidget_3->addTab(tab_6, QString());

        gridLayout_12->addWidget(tabWidget_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        horizontalLayout_11->addWidget(stackedWidget);


        gridLayout->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        label_balance_prefix->setText(QCoreApplication::translate("MainWindow", "Balance:", nullptr));
        label_balance->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_overview), QCoreApplication::translate("MainWindow", "\346\246\202\345\206\265", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\344\274\260\350\256\241\345\270\202\345\200\274:", nullptr));
        label_revenue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_updateMarket->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_priceTracking), QCoreApplication::translate("MainWindow", "\344\273\267\346\240\274", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\347\233\221\346\216\247", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Ergo", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Cardano", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\227\245\345\277\227", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\346\227\245\345\277\227", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Firo\357\274\232", nullptr));
        lineEdit_firoAccount->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Ergo\357\274\232", nullptr));
        lineEdit_ergoAccount->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_help), QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOW_H
