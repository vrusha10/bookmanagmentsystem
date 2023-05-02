#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addbook.h"
#include "adduser.h"
#include "viewbook.h"
#include "viewuser.h"
#include "issuebook.h"
#include "returnbook.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    AddUser *au=new AddUser();
    AddBook *ab=new AddBook();
    ViewBook *vb=new ViewBook();
    ViewUser *vu=new ViewUser();
    IssueBook *ib=new IssueBook(ab ,vb); //(ab ,vb)
    ReturnBook *rb=new ReturnBook(ab,vb); //(ab,vb)
};
#endif // MAINWINDOW_H
