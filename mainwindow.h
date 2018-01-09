#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_lineEditDurTL_textEdited(const QString &arg1);

    void on_lineEditDurTR_textEdited(const QString &arg1);

    void on_lineEditDurBL_textEdited(const QString &arg1);

    void on_lineEditDurBR_textEdited(const QString &arg1);

    void on_lineEditDurTopOven_textEdited(const QString &arg1);

    void on_lineEditDurBotOven_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
