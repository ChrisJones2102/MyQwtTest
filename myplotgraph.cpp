#include "myplotgraph.h"

#include <qwt.h>
#include <qwt_plot.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_text.h>

MyPlotGraph::MyPlotGraph(QWidget *parent)
    : QwtPlot(parent)
{
    int scale_factor  =  10;
    int parentWidth   =  parent->width();
    int parentHeight  =  parent->height();
//    QSize parentSize   =  parent->size();
    int graphPosnX  =  parentWidth/scale_factor;
    int graphPosnY  =  parentHeight/scale_factor;
    int graphWidth  =  (scale_factor-2)*parentWidth/scale_factor;
    int graphHeight =  (scale_factor-2)*parentHeight/scale_factor;
    move( graphPosnX, graphPosnY );
    resize( graphWidth, graphHeight );
    QwtText *myTitle = new QwtText( "Hello, World!!" );
    QwtText *myYAxisLabel = new QwtText( "Y Axis" );
    QwtText *myXAxisLabel = new QwtText( "X Axis" );
    setTitle( *myTitle );
    setAxisLabelRotation( QwtPlot::yLeft , 3.1415926/2. );
    setAxisLabelAlignment( QwtPlot::yLeft, Qt::AlignLeft | Qt::AlignVCenter );
    setAxisTitle( QwtPlot::yLeft, *myYAxisLabel );
//    myPlot->setAx
    setAxisLabelRotation( QwtPlot::xBottom, 0 );
    setAxisLabelAlignment( QwtPlot::xBottom, Qt::AlignCenter | Qt::AlignTop );
    setAxisTitle( QwtPlot::xBottom, *myXAxisLabel );

}


MyPlotGraph::~MyPlotGraph()
{

}
