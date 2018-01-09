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

void MainWindow::on_lineEditDurTL_textEdited(const QString &arg1)
{
    ui->durationTL->setText(arg1);
}

void MainWindow::on_lineEditDurTR_textEdited(const QString &arg1)
{
    ui->durationTR->setText(arg1);
}


void MainWindow::on_lineEditDurBL_textEdited(const QString &arg1)
{
    ui->durationBL->setText(arg1);
}

void MainWindow::on_lineEditDurBR_textEdited(const QString &arg1)
{
    ui->durationBR->setText(arg1);
}

void MainWindow::on_lineEditDurTopOven_textEdited(const QString &arg1)
{
    ui->durationTopOven->setText(arg1);
}

void MainWindow::on_lineEditDurBotOven_textEdited(const QString &arg1)
{
    ui->durationBotOven->setText(arg1);
}
