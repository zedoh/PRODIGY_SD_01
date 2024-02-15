#ifndef TEMPWIDGET_H
#define TEMPWIDGET_H

#include <QWidget>
#include <QComboBox>
#include <QLabel>
#include <QLineEdit>
#include <QString>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "tempconverter.h"

class TempWidget : public QWidget
{
public:
    TempWidget(QWidget* parent = nullptr) ;
private slots:
    void ConvertTemperature() ;
private:
    QComboBox* 	 unitfrom ;
    QLineEdit* 	 valueLineEdit;
    QLabel*	   	 valuelabel ; // "Enter Value" label
    QLabel*	   	 TempValue1 ; // result 1 value
    QLabel*	   	 TempValue2; // result 2 value
    QHBoxLayout* row1 ;
    QHBoxLayout* row2 ;
    QHBoxLayout* row3;
    QVBoxLayout* MainLayout;
    QPushButton* convertButton;
};
#endif // TEMPWIDGET_H
