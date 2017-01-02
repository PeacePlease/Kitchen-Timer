#include "mainwindow.h"
#include <QApplication>

#include <QVBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle(QWidget::tr("Kitchen Timer"));
    w.showMaximized();
    return a.exec();
}
