#ifndef TEMPERATURECONVERTER_H
#define TEMPERATURECONVERTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class TemperatureConverter;
}
QT_END_NAMESPACE

class TemperatureConverter : public QMainWindow
{
    Q_OBJECT

public:
    TemperatureConverter(QWidget *parent = nullptr);
    ~TemperatureConverter();

private:
    Ui::TemperatureConverter *ui;
};
#endif // TEMPERATURECONVERTER_H
