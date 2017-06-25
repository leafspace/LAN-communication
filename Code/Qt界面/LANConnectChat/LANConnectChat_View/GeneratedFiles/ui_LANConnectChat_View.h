/********************************************************************************
** Form generated from reading UI file 'LANConnectChat_View.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANCONNECTCHAT_VIEW_H
#define UI_LANCONNECTCHAT_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LANConnectChat_ViewClass
{
public:
    QWidget *centralWidget;
    QListView *listView;
    QFrame *frame;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LANConnectChat_ViewClass)
    {
        if (LANConnectChat_ViewClass->objectName().isEmpty())
            LANConnectChat_ViewClass->setObjectName(QStringLiteral("LANConnectChat_ViewClass"));
        LANConnectChat_ViewClass->resize(1120, 780);
        centralWidget = new QWidget(LANConnectChat_ViewClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(40, 130, 311, 541));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(60, 30, 120, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(420, 130, 661, 541));
        LANConnectChat_ViewClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LANConnectChat_ViewClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1120, 23));
        LANConnectChat_ViewClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LANConnectChat_ViewClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LANConnectChat_ViewClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LANConnectChat_ViewClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LANConnectChat_ViewClass->setStatusBar(statusBar);

        retranslateUi(LANConnectChat_ViewClass);

        QMetaObject::connectSlotsByName(LANConnectChat_ViewClass);
    } // setupUi

    void retranslateUi(QMainWindow *LANConnectChat_ViewClass)
    {
        LANConnectChat_ViewClass->setWindowTitle(QApplication::translate("LANConnectChat_ViewClass", "LANConnectChat_View", 0));
    } // retranslateUi

};

namespace Ui {
    class LANConnectChat_ViewClass: public Ui_LANConnectChat_ViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANCONNECTCHAT_VIEW_H
