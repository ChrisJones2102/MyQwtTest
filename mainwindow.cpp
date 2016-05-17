#include "mainwindow.h"

#include <QApplication>
#include <QDesktopWidget>
#include <qwt.h>
#include <qwt_plot.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_text.h>
#include "myplotgraph.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QDesktopWidget *mydesk = QApplication::desktop();
    int screenWidth   =  mydesk->width();
    int screenHeight  =  mydesk->height();

    int scale_factor  =  10;
    int windowPosnX   =  screenWidth/scale_factor;
    int windowPosnY   =  screenHeight/scale_factor;
    int windowWidth   =  (scale_factor-2)*screenWidth/scale_factor;
    int windowHeight  =  (scale_factor-2)*screenHeight/scale_factor;
    move( windowPosnX, windowPosnY );
    resize( windowWidth, windowHeight );
    myPlot  =  new MyPlotGraph(this);
}

MainWindow::~MainWindow()
{

}
