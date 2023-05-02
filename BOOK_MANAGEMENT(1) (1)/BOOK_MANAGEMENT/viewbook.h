#ifndef VIEWBOOK_H
#define VIEWBOOK_H

#include <QDialog>
#include<QMap>
namespace Ui {
class ViewBook;
}

class ViewBook : public QDialog
{
    Q_OBJECT

public:
    explicit ViewBook(QWidget *parent = nullptr);
    ~ViewBook();

public slots:
void ReceiveData(QMap<QString,int>); //issue

void ReceiveData1(QMap<QString,int>); //return

private:
    Ui::ViewBook *ui;
    QMap<QString, int>Data; // issue
    QMap<QString,int> Data1; // return
};

#endif // VIEWBOOK_H
