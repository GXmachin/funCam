/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Jun 22 00:30:01 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *originalLabel;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *funLabel;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *warpGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *warpCheckBox;
    QSlider *warpHorizontalSlider;
    QCheckBox *smoothCheckBox;
    QSlider *smootheningHorizonatalSlider;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *edgeDetectCheckBox;
    QSlider *horizontalSlider_3;
    QGroupBox *shadedGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *shadedmeCheckBox;
    QSlider *horizontalSlider;
    QCheckBox *brightnessCheckBox;
    QSlider *horizontalSlider_5;
    QCheckBox *contrastCheckBox;
    QSlider *horizontalSlider_6;
    QGroupBox *grayGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *grayScaleCheckBox;
    QCheckBox *resourceStingyCheckBox;
    QCheckBox *negativeCheckBox;
    QCheckBox *nineteen49CheckBox;
    QGroupBox *rGBGroupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSlider *rluckyHorizontalSlider;
    QLabel *label_3;
    QSlider *gLuckyHorizontalSlider;
    QLabel *label_4;
    QSlider *bhorizontalSlider;
    QToolButton *faceBookToolButton;
    QToolButton *instagramToolButton;
    QToolButton *snapToolButon;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(704, 591);
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(11);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        originalLabel = new QLabel(groupBox);
        originalLabel->setObjectName(QString::fromUtf8("originalLabel"));

        gridLayout_3->addWidget(originalLabel, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        funLabel = new QLabel(groupBox_3);
        funLabel->setObjectName(QString::fromUtf8("funLabel"));

        gridLayout_4->addWidget(funLabel, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 0, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        warpGroupBox = new QGroupBox(centralWidget);
        warpGroupBox->setObjectName(QString::fromUtf8("warpGroupBox"));
        verticalLayout = new QVBoxLayout(warpGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        warpCheckBox = new QCheckBox(warpGroupBox);
        warpCheckBox->setObjectName(QString::fromUtf8("warpCheckBox"));

        verticalLayout->addWidget(warpCheckBox);

        warpHorizontalSlider = new QSlider(warpGroupBox);
        warpHorizontalSlider->setObjectName(QString::fromUtf8("warpHorizontalSlider"));
        warpHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(warpHorizontalSlider);

        smoothCheckBox = new QCheckBox(warpGroupBox);
        smoothCheckBox->setObjectName(QString::fromUtf8("smoothCheckBox"));

        verticalLayout->addWidget(smoothCheckBox);

        smootheningHorizonatalSlider = new QSlider(warpGroupBox);
        smootheningHorizonatalSlider->setObjectName(QString::fromUtf8("smootheningHorizonatalSlider"));
        smootheningHorizonatalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(smootheningHorizonatalSlider);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        edgeDetectCheckBox = new QCheckBox(warpGroupBox);
        edgeDetectCheckBox->setObjectName(QString::fromUtf8("edgeDetectCheckBox"));

        horizontalLayout_4->addWidget(edgeDetectCheckBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalSlider_3 = new QSlider(warpGroupBox);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_3);


        horizontalLayout->addWidget(warpGroupBox);

        shadedGroupBox = new QGroupBox(centralWidget);
        shadedGroupBox->setObjectName(QString::fromUtf8("shadedGroupBox"));
        verticalLayout_2 = new QVBoxLayout(shadedGroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        shadedmeCheckBox = new QCheckBox(shadedGroupBox);
        shadedmeCheckBox->setObjectName(QString::fromUtf8("shadedmeCheckBox"));

        verticalLayout_2->addWidget(shadedmeCheckBox);

        horizontalSlider = new QSlider(shadedGroupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider);

        brightnessCheckBox = new QCheckBox(shadedGroupBox);
        brightnessCheckBox->setObjectName(QString::fromUtf8("brightnessCheckBox"));

        verticalLayout_2->addWidget(brightnessCheckBox);

        horizontalSlider_5 = new QSlider(shadedGroupBox);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_5);

        contrastCheckBox = new QCheckBox(shadedGroupBox);
        contrastCheckBox->setObjectName(QString::fromUtf8("contrastCheckBox"));

        verticalLayout_2->addWidget(contrastCheckBox);

        horizontalSlider_6 = new QSlider(shadedGroupBox);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_6);


        horizontalLayout->addWidget(shadedGroupBox);


        horizontalLayout_2->addLayout(horizontalLayout);

        grayGroupBox = new QGroupBox(centralWidget);
        grayGroupBox->setObjectName(QString::fromUtf8("grayGroupBox"));
        verticalLayout_3 = new QVBoxLayout(grayGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        grayScaleCheckBox = new QCheckBox(grayGroupBox);
        grayScaleCheckBox->setObjectName(QString::fromUtf8("grayScaleCheckBox"));

        verticalLayout_3->addWidget(grayScaleCheckBox);

        resourceStingyCheckBox = new QCheckBox(grayGroupBox);
        resourceStingyCheckBox->setObjectName(QString::fromUtf8("resourceStingyCheckBox"));

        verticalLayout_3->addWidget(resourceStingyCheckBox);

        negativeCheckBox = new QCheckBox(grayGroupBox);
        negativeCheckBox->setObjectName(QString::fromUtf8("negativeCheckBox"));

        verticalLayout_3->addWidget(negativeCheckBox);

        nineteen49CheckBox = new QCheckBox(grayGroupBox);
        nineteen49CheckBox->setObjectName(QString::fromUtf8("nineteen49CheckBox"));

        verticalLayout_3->addWidget(nineteen49CheckBox);


        horizontalLayout_2->addWidget(grayGroupBox);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        rGBGroupBox = new QGroupBox(centralWidget);
        rGBGroupBox->setObjectName(QString::fromUtf8("rGBGroupBox"));
        gridLayout = new QGridLayout(rGBGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(rGBGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        rluckyHorizontalSlider = new QSlider(rGBGroupBox);
        rluckyHorizontalSlider->setObjectName(QString::fromUtf8("rluckyHorizontalSlider"));
        rluckyHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(rluckyHorizontalSlider);

        label_3 = new QLabel(rGBGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        gLuckyHorizontalSlider = new QSlider(rGBGroupBox);
        gLuckyHorizontalSlider->setObjectName(QString::fromUtf8("gLuckyHorizontalSlider"));
        gLuckyHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(gLuckyHorizontalSlider);

        label_4 = new QLabel(rGBGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        bhorizontalSlider = new QSlider(rGBGroupBox);
        bhorizontalSlider->setObjectName(QString::fromUtf8("bhorizontalSlider"));
        bhorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(bhorizontalSlider);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(rGBGroupBox);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 3, 2);

        faceBookToolButton = new QToolButton(centralWidget);
        faceBookToolButton->setObjectName(QString::fromUtf8("faceBookToolButton"));

        gridLayout_2->addWidget(faceBookToolButton, 1, 2, 1, 1);

        instagramToolButton = new QToolButton(centralWidget);
        instagramToolButton->setObjectName(QString::fromUtf8("instagramToolButton"));

        gridLayout_2->addWidget(instagramToolButton, 2, 2, 1, 1);

        snapToolButon = new QToolButton(centralWidget);
        snapToolButon->setObjectName(QString::fromUtf8("snapToolButon"));

        gridLayout_2->addWidget(snapToolButon, 3, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Original", 0, QApplication::UnicodeUTF8));
        originalLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Fun in U", 0, QApplication::UnicodeUTF8));
        funLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        warpCheckBox->setText(QApplication::translate("MainWindow", "Warp", 0, QApplication::UnicodeUTF8));
        smoothCheckBox->setText(QApplication::translate("MainWindow", "Smoothening", 0, QApplication::UnicodeUTF8));
        edgeDetectCheckBox->setText(QApplication::translate("MainWindow", "Edge Detect", 0, QApplication::UnicodeUTF8));
        shadedmeCheckBox->setText(QApplication::translate("MainWindow", "Shaded Me", 0, QApplication::UnicodeUTF8));
        brightnessCheckBox->setText(QApplication::translate("MainWindow", "Brightness", 0, QApplication::UnicodeUTF8));
        contrastCheckBox->setText(QApplication::translate("MainWindow", "Contrast", 0, QApplication::UnicodeUTF8));
        grayScaleCheckBox->setText(QApplication::translate("MainWindow", "Gray Scale", 0, QApplication::UnicodeUTF8));
        resourceStingyCheckBox->setText(QApplication::translate("MainWindow", "Resource Stingy", 0, QApplication::UnicodeUTF8));
        negativeCheckBox->setText(QApplication::translate("MainWindow", "Negative", 0, QApplication::UnicodeUTF8));
        nineteen49CheckBox->setText(QApplication::translate("MainWindow", "1949", 0, QApplication::UnicodeUTF8));
        rGBGroupBox->setTitle(QApplication::translate("MainWindow", "RGB Lucky Star", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Red", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Green", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Blue", 0, QApplication::UnicodeUTF8));
        faceBookToolButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        instagramToolButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        snapToolButon->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
