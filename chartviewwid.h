#ifndef CHARTVIEWWID_H
#define CHARTVIEWWID_H

#include <QtCharts/QChartView>
#include <QtCharts/QSplineSeries>
QT_CHARTS_USE_NAMESPACE

#include <QDateTimeAxis>//时间坐标轴
#include <QValueAxis>//普通坐标轴
#include <QDateTime>
#include <QBoxLayout>

class ChartViewWid : public QWidget
{
public:
    explicit ChartViewWid(QWidget *parent = nullptr);
    void ElectricChange(int numa);
    Init(QString str_name);
    ReInit();


private:
    QChart *qchart;
    QChartView *chartView;
    QLineSeries *line_main,*line_low,*line_high;//,*ser1,*ser2,*ser3;
    QDateTimeAxis *QaX;
    QValueAxis *QaY;
    QColor color;
    int low_value = 740;
    int high_value = 860;

};

#endif // CHARTVIEWWID_H
