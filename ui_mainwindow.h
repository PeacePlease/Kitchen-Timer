/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QFrame *hobTR;
    QLabel *durationTR;
    QFrame *hobBL;
    QLabel *durationBL;
    QFrame *hobBR;
    QLabel *durationBR;
    QFrame *hobTL;
    QLabel *durationTL;
    QFrame *frame_2;
    QLabel *durationTopOven;
    QFrame *frame_3;
    QLabel *durationBotOven;
    QLineEdit *lineEditDurTL;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QLineEdit *lineEditDurTR;
    QLineEdit *lineEditDurBL;
    QLineEdit *lineEditDurBR;
    QLineEdit *lineEditDurTopOven;
    QLineEdit *lineEditDurBotOven;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEditNameTL;
    QLineEdit *lineEditNameTR;
    QLineEdit *lineEditNameBL;
    QLineEdit *lineEditNameBR;
    QLineEdit *lineEditNameTopOven;
    QLineEdit *lineEditNameBotOven;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuKitchen_Timer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1360, 597);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 30, 511, 511));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(gridLayoutWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QStringLiteral("border-image: url(:/hobs/images/BG.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        hobTR = new QFrame(frame);
        hobTR->setObjectName(QStringLiteral("hobTR"));
        hobTR->setGeometry(QRect(260, 20, 231, 221));
        hobTR->setStyleSheet(QLatin1String("image: url(:/hobs/images/hobTR.png);\n"
"border:none;\n"
"border-image:none;"));
        hobTR->setFrameShape(QFrame::StyledPanel);
        hobTR->setFrameShadow(QFrame::Raised);
        durationTR = new QLabel(hobTR);
        durationTR->setObjectName(QStringLiteral("durationTR"));
        durationTR->setGeometry(QRect(90, 100, 61, 16));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        durationTR->setPalette(palette);
        durationTR->setAlignment(Qt::AlignCenter);
        hobBL = new QFrame(frame);
        hobBL->setObjectName(QStringLiteral("hobBL"));
        hobBL->setGeometry(QRect(20, 240, 241, 251));
        hobBL->setStyleSheet(QLatin1String("image: url(:/hobs/images/hobBL.png);\n"
"border:none;\n"
"border-image:none;"));
        hobBL->setFrameShape(QFrame::StyledPanel);
        hobBL->setFrameShadow(QFrame::Raised);
        durationBL = new QLabel(hobBL);
        durationBL->setObjectName(QStringLiteral("durationBL"));
        durationBL->setGeometry(QRect(80, 130, 61, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        durationBL->setPalette(palette1);
        durationBL->setAlignment(Qt::AlignCenter);
        hobBR = new QFrame(frame);
        hobBR->setObjectName(QStringLiteral("hobBR"));
        hobBR->setGeometry(QRect(260, 240, 251, 251));
        hobBR->setStyleSheet(QLatin1String("image: url(:/hobs/images/hobBR.png);\n"
"border:none;\n"
"border-image:none;"));
        hobBR->setFrameShape(QFrame::StyledPanel);
        hobBR->setFrameShadow(QFrame::Raised);
        durationBR = new QLabel(hobBR);
        durationBR->setObjectName(QStringLiteral("durationBR"));
        durationBR->setGeometry(QRect(90, 140, 61, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        durationBR->setPalette(palette2);
        durationBR->setAlignment(Qt::AlignCenter);
        hobTL = new QFrame(frame);
        hobTL->setObjectName(QStringLiteral("hobTL"));
        hobTL->setGeometry(QRect(20, 20, 241, 221));
        hobTL->setStyleSheet(QLatin1String("image: url(:/hobs/images/hobTL.png);\n"
"border-image: none;\n"
"border:none;"));
        hobTL->setFrameShape(QFrame::StyledPanel);
        hobTL->setFrameShadow(QFrame::Plain);
        hobTL->setLineWidth(0);
        durationTL = new QLabel(hobTL);
        durationTL->setObjectName(QStringLiteral("durationTL"));
        durationTL->setGeometry(QRect(60, 90, 61, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        durationTL->setPalette(palette3);
        durationTL->setAlignment(Qt::AlignCenter);
        hobTR->raise();
        hobBR->raise();
        hobBL->raise();
        hobTL->raise();

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(560, 30, 401, 211));
        frame_2->setStyleSheet(QStringLiteral("image: url(:/hobs/images/TopOven.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        durationTopOven = new QLabel(frame_2);
        durationTopOven->setObjectName(QStringLiteral("durationTopOven"));
        durationTopOven->setGeometry(QRect(170, 100, 61, 16));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        durationTopOven->setPalette(palette4);
        durationTopOven->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(560, 220, 401, 321));
        frame_3->setStyleSheet(QStringLiteral("image: url(:/hobs/images/BottomOven.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        durationBotOven = new QLabel(frame_3);
        durationBotOven->setObjectName(QStringLiteral("durationBotOven"));
        durationBotOven->setGeometry(QRect(170, 100, 61, 16));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        durationBotOven->setPalette(palette5);
        durationBotOven->setAlignment(Qt::AlignCenter);
        lineEditDurTL = new QLineEdit(centralWidget);
        lineEditDurTL->setObjectName(QStringLiteral("lineEditDurTL"));
        lineEditDurTL->setGeometry(QRect(1090, 90, 113, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(980, 50, 81, 16));
        label->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(980, 90, 81, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(980, 120, 81, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(980, 150, 81, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(980, 180, 81, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(980, 220, 81, 16));
        label_6->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(980, 260, 81, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(980, 290, 81, 16));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(980, 70, 361, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(1070, 50, 20, 261));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(980, 240, 361, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(980, 200, 361, 21));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(980, 201, 361, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        lineEditDurTR = new QLineEdit(centralWidget);
        lineEditDurTR->setObjectName(QStringLiteral("lineEditDurTR"));
        lineEditDurTR->setGeometry(QRect(1090, 120, 113, 20));
        lineEditDurBL = new QLineEdit(centralWidget);
        lineEditDurBL->setObjectName(QStringLiteral("lineEditDurBL"));
        lineEditDurBL->setGeometry(QRect(1090, 150, 113, 20));
        lineEditDurBR = new QLineEdit(centralWidget);
        lineEditDurBR->setObjectName(QStringLiteral("lineEditDurBR"));
        lineEditDurBR->setGeometry(QRect(1090, 180, 113, 20));
        lineEditDurTopOven = new QLineEdit(centralWidget);
        lineEditDurTopOven->setObjectName(QStringLiteral("lineEditDurTopOven"));
        lineEditDurTopOven->setGeometry(QRect(1090, 260, 113, 20));
        lineEditDurBotOven = new QLineEdit(centralWidget);
        lineEditDurBotOven->setObjectName(QStringLiteral("lineEditDurBotOven"));
        lineEditDurBotOven->setGeometry(QRect(1090, 290, 113, 20));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(1090, 50, 81, 16));
        label_9->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1090, 220, 81, 16));
        label_10->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(1220, 50, 101, 16));
        label_11->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(1220, 220, 101, 16));
        label_12->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        lineEditNameTL = new QLineEdit(centralWidget);
        lineEditNameTL->setObjectName(QStringLiteral("lineEditNameTL"));
        lineEditNameTL->setGeometry(QRect(1220, 90, 113, 20));
        lineEditNameTR = new QLineEdit(centralWidget);
        lineEditNameTR->setObjectName(QStringLiteral("lineEditNameTR"));
        lineEditNameTR->setGeometry(QRect(1220, 120, 113, 20));
        lineEditNameBL = new QLineEdit(centralWidget);
        lineEditNameBL->setObjectName(QStringLiteral("lineEditNameBL"));
        lineEditNameBL->setGeometry(QRect(1220, 150, 113, 20));
        lineEditNameBR = new QLineEdit(centralWidget);
        lineEditNameBR->setObjectName(QStringLiteral("lineEditNameBR"));
        lineEditNameBR->setGeometry(QRect(1220, 180, 113, 20));
        lineEditNameTopOven = new QLineEdit(centralWidget);
        lineEditNameTopOven->setObjectName(QStringLiteral("lineEditNameTopOven"));
        lineEditNameTopOven->setGeometry(QRect(1220, 260, 113, 20));
        lineEditNameBotOven = new QLineEdit(centralWidget);
        lineEditNameBotOven->setObjectName(QStringLiteral("lineEditNameBotOven"));
        lineEditNameBotOven->setGeometry(QRect(1220, 290, 113, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1110, 350, 111, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1360, 21));
        menuKitchen_Timer = new QMenu(menuBar);
        menuKitchen_Timer->setObjectName(QStringLiteral("menuKitchen_Timer"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuKitchen_Timer->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        durationTR->setText(QString());
        durationBL->setText(QString());
        durationBR->setText(QString());
        durationTL->setText(QString());
        durationTopOven->setText(QString());
        durationBotOven->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Hob", 0));
        label_2->setText(QApplication::translate("MainWindow", "Top left", 0));
        label_3->setText(QApplication::translate("MainWindow", "Top right", 0));
        label_4->setText(QApplication::translate("MainWindow", "Bottom left", 0));
        label_5->setText(QApplication::translate("MainWindow", "Bottom right", 0));
        label_6->setText(QApplication::translate("MainWindow", "Oven", 0));
        label_7->setText(QApplication::translate("MainWindow", "Top", 0));
        label_8->setText(QApplication::translate("MainWindow", "Bottom", 0));
        label_9->setText(QApplication::translate("MainWindow", "Duration", 0));
        label_10->setText(QApplication::translate("MainWindow", "Duration", 0));
        label_11->setText(QApplication::translate("MainWindow", "Name (optional)", 0));
        label_12->setText(QApplication::translate("MainWindow", "Name (optional)", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Start!", 0));
        menuKitchen_Timer->setTitle(QApplication::translate("MainWindow", "Kitchen Timer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
