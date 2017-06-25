#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LANConnectChat_View.h"

class LANConnectChat_View : public QMainWindow
{
    Q_OBJECT

public:
    LANConnectChat_View(QWidget *parent = Q_NULLPTR);

private:
    Ui::LANConnectChat_ViewClass ui;
};
