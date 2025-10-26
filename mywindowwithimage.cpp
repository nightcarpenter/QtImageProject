#include "mywindowwithimage.h"
#include "ui_mywindowwithimage.h"

MyWindowWithImage::MyWindowWithImage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyWindowWithImage)
{
    ui->setupUi(this);

    QString absolute_path_file = "C:/Users/andrey/Desktop/MyProjects/PracticumCPP/QtImageProject/img/image.png";
    SetPixmap(ui->lbl_pixmap, absolute_path_file);
}

MyWindowWithImage::~MyWindowWithImage()
{
    delete ui;
}

void MyWindowWithImage::MyWindowWithImage::SetPixmap(QLabel *label_pix, const QString path){
    QPixmap pix{path};
    Q_ASSERT(!pix.isNull());

    // Получаем размер QLabel
    QSize label_size = label_pix->size();

    // Масштабируем изображение с сохранением пропорций
    QPixmap scaled_pix = pix.scaled(label_size, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    label_pix->setPixmap(scaled_pix);
}
