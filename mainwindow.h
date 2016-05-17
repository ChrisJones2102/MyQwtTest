#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



class QwtPlot;
class MyPlotGraph;
//  class QwtCanvas;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    MyPlotGraph   *myPlot;
//    QwtCanvas  *myCanvas;
};

#endif // MAINWINDOW_H
