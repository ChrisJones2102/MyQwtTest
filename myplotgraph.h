#ifndef MYPLOTGRAPH_H
#define MYPLOTGRAPH_H

#include <QWidget>
#include <qwt.h>
#include <qwt_plot.h>
//  #include <qwt_plot_canvas.h>
//  #include <qwt_plot_curve.h>
//  #include <qwt_text.h>


class QwtText;
class QwtPlotCurve;

//class QwtPlot;

class MyPlotGraph : public QwtPlot
{
    Q_OBJECT

public:
    MyPlotGraph(QWidget *parent = 0);
    ~MyPlotGraph();

    QwtPlotCurve *curve_1;
    QwtPlotCurve *curve_2;

protected:

    QwtText *graphTitle;
    QwtText *yAxisLabel;
    QwtText *xAxisLabel;

private:

};

#endif // MYPLOTGRAPH_H
