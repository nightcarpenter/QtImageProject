#ifndef MYWINDOWWITHIMAGE_H
#define MYWINDOWWITHIMAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MyWindowWithImage;
}
QT_END_NAMESPACE

class MyWindowWithImage : public QMainWindow
{
    Q_OBJECT

public:
    MyWindowWithImage(QWidget *parent = nullptr);
    ~MyWindowWithImage();

private:
    Ui::MyWindowWithImage *ui;
};
#endif // MYWINDOWWITHIMAGE_H
