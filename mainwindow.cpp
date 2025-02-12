#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{


    QString result;
    QString input=ui->FixArabicPasslineEdit->text();
    for (QChar  ch : input) {

        uint16_t utf16le = ch.unicode();


        char firstByte = utf16le & 0xFF;


        result += firstByte;
    }

    qDebug() << "ASCII Interpretation:" << result;
    ui->label_2->setText(result);
}

