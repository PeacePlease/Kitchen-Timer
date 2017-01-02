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
    QFrame *hob2;
    QFrame *hob4;
    QFrame *hob3;
    QFrame *hob1;
    QLabel *duration;
    QFrame *frame_2;
    QFrame *frame_3;
    QLineEdit *lineEdit;
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
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
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
        hob2 = new QFrame(frame);
        hob2->setObjectName(QStringLiteral("hob2"));
        hob2->setGeometry(QRect(260, 20, 231, 221));
        hob2->setStyleSheet(QLatin1String("image: url(:/hobs/images/hobTR.png);\n"
"border:none;\n"
"border-image:none;"));
        hob2->setFrameShape(QFrame::StyledPanel);
        hob2->setFrameShadow(QFrame::Raised);
        hob4 = new QFrame(frame);
        hob4->setObjectName(QStringLiteral("hob4"));
        hob4->setGeometry(QRect(20, 240, 241, 251));
        hob4->setStyleSheet(QLatin1String("image: url(:/hobs/images/hobBL.png);\n"
"border:none;\n"
"border-image:none;"));
        hob4->setFrameShape(QFrame::StyledPanel);
        hob4->setFrameShadow(QFrame::Raised);
        hob3 = new QFrame(frame);
        hob3->setObjectName(QStringLiteral("hob3"));
        hob3->setGeometry(QRect(260, 240, 251, 251));
        hob3->setStyleSheet(QLatin1String("image: url(:/hobs/images/hobBR.png);\n"
"border:none;\n"
"border-image:none;"));
        hob3->setFrameShape(QFrame::StyledPanel);
        hob3->setFrameShadow(QFrame::Raised);
        hob1 = new QFrame(frame);
        hob1->setObjectName(QStringLiteral("hob1"));
        hob1->setGeometry(QRect(20, 20, 241, 221));
        hob1->setStyleSheet(QLatin1String("image: url(:/hobs/images/hobTL.png);\n"
"border-image: none;\n"
"border:none;"));
        hob1->setFrameShape(QFrame::StyledPanel);
        hob1->setFrameShadow(QFrame::Plain);
        hob1->setLineWidth(0);
        duration = new QLabel(hob1);
        duration->setObjectName(QStringLiteral("duration"));
        duration->setGeometry(QRect(60, 90, 61, 16));
        hob2->raise();
        hob3->raise();
        hob4->raise();
        hob1->raise();

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(560, 30, 401, 211));
        frame_2->setStyleSheet(QStringLiteral("image: url(:/hobs/images/TopOven.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(560, 220, 401, 321));
        frame_3->setStyleSheet(QStringLiteral("image: url(:/hobs/images/BottomOven.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1090, 90, 113, 20));
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
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(1090, 120, 113, 20));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(1090, 150, 113, 20));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(1090, 180, 113, 20));
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(1090, 260, 113, 20));
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(1090, 290, 113, 20));
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
        lineEdit_7 = new QLineEdit(centralWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(1220, 90, 113, 20));
        lineEdit_8 = new QLineEdit(centralWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(1220, 120, 113, 20));
        lineEdit_9 = new QLineEdit(centralWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(1220, 150, 113, 20));
        lineEdit_10 = new QLineEdit(centralWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(1220, 180, 113, 20));
        lineEdit_11 = new QLineEdit(centralWidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(1220, 260, 113, 20));
        lineEdit_12 = new QLineEdit(centralWidget);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(1220, 290, 113, 20));
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
        duration->setText(QApplication::translate("MainWindow", "TextLabel", 0));
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
        menuKitchen_Timer->setTitle(QApplication::translate("MainWindow", "Kitchen Timer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
