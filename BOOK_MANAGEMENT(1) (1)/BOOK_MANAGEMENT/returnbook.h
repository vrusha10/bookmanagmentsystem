#ifndef RETURNBOOK_H
#define RETURNBOOK_H

#include <QDialog>
#include "adduser.h"
#include "viewuser.h"
#include <QSet>

class ViewBook;
class AddBook;
namespace Ui {
class ReturnBook;
}

class ReturnBook : public QDialog
{
    Q_OBJECT

public:
    explicit ReturnBook(AddBook* ptt,ViewBook* ptt2,QWidget *parent = nullptr);
    ~ReturnBook();
    void input_of_studentname2(QSet<QString>);
    void display_combo11();

    void input_of_bookname2(QMap<QString,int>);
    void display_combo12();

    QMap<QString, int> qqq;  //return

    void pass1(QMap<QString,int>);

    AddBook *oabb;
    ViewBook *ovbb;


private slots:
    void on_pushButton_clicked();

private:
    Ui::ReturnBook *ui;
     QSet<QString> s1;
};

#endif // RETURNBOOK_H
