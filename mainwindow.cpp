#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter *paint = new QPainter(this);

    paint->setPen(Qt::black);
    paint->setBrush(Qt::green);
    paint->drawRect(10, 40, 100, 100);
}
