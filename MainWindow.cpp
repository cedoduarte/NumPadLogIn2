#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>

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

void MainWindow::on_actionQuitarAplicacion_triggered()
{
    close();
}

void MainWindow::on_actionAcerca_de_Qt_triggered()
{
    QMessageBox::aboutQt(this, "About Qt");
}
