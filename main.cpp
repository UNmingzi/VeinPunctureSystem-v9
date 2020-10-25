﻿#if _MSC_VER >= 1900
#pragma execution_character_set("utf-8")
#endif
#include "mainwindow.h"
#include <QApplication>
#include <QtGui>
#include "triopc.h"
#include "loginform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    //LoginForm login;
    /*if (login.exec()==QDialog::Accepted)
    {
        w.resize(900,600);
        w.show();

    }*/
    w.show();
    return a.exec();                //a.exex()执行窗口交互命令，应用程序退出时会返回
}
