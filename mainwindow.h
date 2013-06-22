#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cv.h"
#include "highgui.h"
#include "imgproc/imgproc.hpp"
#include "core/core.hpp"
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

    cv::VideoCapture cap_webcam;
    cv::Mat img_original;
    cv::Mat img_processed;

    QImage qimg_original;
    QImage qimg_processed;
     QImage qimg_processed2;
    std::vector<cv::Vec3f> vecCircles;
    std::vector<cv::Vec3f>::iterator vec_itr;
    int no_keeper;
    double treshold_canny;
    double treshold_canny2;
    double gaus1;
    double gaus2;
    int r_range_min;
    int r_range_max;
    QCursor cursor;

    QTimer* frame_timer;

public slots:
   void process_update();
   void disable_color_inclined();
   void enable_color_inclined();

private slots:
   void on_edgeDetectCheckBox_clicked();
   void on_horizontalSlider_3_valueChanged(int value);
};

#endif // MAINWINDOW_H
