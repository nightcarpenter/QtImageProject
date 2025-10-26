#include "mywindowwithimage.h"
#include "ui_mywindowwithimage.h"

MyWindowWithImage::MyWindowWithImage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyWindowWithImage)
{
    ui->setupUi(this);
}

MyWindowWithImage::~MyWindowWithImage()
{
    delete ui;
}
