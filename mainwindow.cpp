#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace cv;
using namespace std;


Mat image;

QString pause = "pause";
QString resume = "resume";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //initialize parameters
    cap_webcam.open(0); //select the default device

    treshold_canny =0.0;
    treshold_canny2 =0.0;

    gaus1 = 3;
    gaus2 = 4;

  //  ui->pause_resume_pushButton->setText(pause);
    if(!cap_webcam.isOpened()){

        //ui->XYtextBrowser->setText("Error Opening");
        return;
    }
    frame_timer = new QTimer(this);

    connect(frame_timer, SIGNAL(timeout()), this, SLOT(process_update()));

    frame_timer->start(20);
    no_keeper =0;
}

MainWindow::~MainWindow()
{
    delete ui;


}

void MainWindow::process_update(){
    cap_webcam.read(img_original);
    if(img_original.empty()){
        return;
    }
  //  img_processed.create(img_original.size(), img_processed.type());


   // GaussianBlur(img_original, img_processed, Size(9,9), gaus1, gaus2);

    img_processed = img_original;
    //qimg_processed2 = QImage((uchar*)img_processed.data, img_processed.cols, img_processed.rows,img_processed.step ,QImage::Format_RGB888);
    //ui->viewBlurlabel->setPixmap(QPixmap::fromImage(qimg_processed2));
   //img_processed = img_original;

    //img_processed.create(img_original.size(), img_processed.type());
    // inRange(img_original, Scalar(230,230,230), Scalar(255,255,255), img_processed);
    //Canny(img_processed, img_processed, double(treshold_1), double(treshold_2));

   // cvtColor(img_original, img_original, CV_BGR2RGB);
     if(ui->edgeDetectCheckBox->isChecked()){
     Canny(img_processed, img_processed, treshold_canny, treshold_canny);
     }
    qimg_original = QImage((uchar*)img_original.data, img_original.cols, img_original.rows,img_original.step, QImage::Format_RGB888);
    qimg_processed = QImage((uchar*)img_processed.data, img_processed.cols, img_processed.rows,img_processed.step ,QImage::Format_Indexed8);
    ui->originalLabel->setPixmap(QPixmap::fromImage(qimg_original));
    ui->funLabel->setPixmap(QPixmap::fromImage(qimg_processed));
}

void MainWindow::disable_color_inclined(){
    //disable all the functions if Edge detection is clicked
   ui->brightnessCheckBox->setEnabled(false);
   ui->grayScaleCheckBox->setEnabled(false);
   ui->negativeCheckBox->setEnabled(false);
   ui->nineteen49CheckBox->setEnabled(false);
   ui->resourceStingyCheckBox->setEnabled(false);
   ui->shadedmeCheckBox->setEnabled(false);
   ui->smoothCheckBox->setEnabled(false);
   ui->warpCheckBox->setEnabled(false);
   ui->contrastCheckBox->setEnabled(false);
 }

void MainWindow::enable_color_inclined(){
    //Enableable all the functions if Edge detection is clicked

    ui->brightnessCheckBox->setEnabled(true);
    ui->grayScaleCheckBox->setEnabled(true);
    ui->negativeCheckBox->setEnabled(true);
    ui->nineteen49CheckBox->setEnabled(true);
    ui->resourceStingyCheckBox->setEnabled(true);
    ui->shadedmeCheckBox->setEnabled(true);
    ui->smoothCheckBox->setEnabled(true);
    ui->warpCheckBox->setEnabled(true);
    ui->contrastCheckBox->setEnabled(true);
}

void MainWindow::on_edgeDetectCheckBox_clicked()
{
    if(ui->edgeDetectCheckBox->isChecked()){
        disable_color_inclined();
    }
    else{
        enable_color_inclined();
    }
}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    treshold_canny = (double) value / 10.0;
}


void MainWindow::on_rluckyHorizontalSlider_valueChanged(int value)
{

}
