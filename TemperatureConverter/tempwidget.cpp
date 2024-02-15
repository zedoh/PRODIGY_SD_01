#include "tempwidget.h"

TempWidget::TempWidget(QWidget* parent):QWidget(parent){
    setGeometry(500,200,200,100)  ;
    setWindowTitle("Temperature Converter") ;
    convertButton = new QPushButton("Convert") ;
    row1 = new QHBoxLayout() ;
    row2 = new QHBoxLayout() ;
    row3 = new QHBoxLayout() ;
    MainLayout = new QVBoxLayout() ;
    convertButton = new QPushButton("Convert")  ;
    valuelabel  = new QLabel("Enter Value") ;
    unitfrom  = new QComboBox(this) ;
    valueLineEdit = new QLineEdit() ;

    TempValue1 = new QLabel() ;
    TempValue2 = new QLabel() ;
    unitfrom->addItem("Fahrenhiet") ;
    unitfrom->addItem("Celsius") ;
    unitfrom->addItem("Kelvin") ;

    MainLayout->setSpacing(10) ;
    row1->addWidget(valuelabel) ;
    row1->addWidget(valueLineEdit) ;
    row1->addWidget(unitfrom) ;

    row2->addWidget(convertButton);
    row3->addWidget(TempValue1) ;
    row3->addWidget(TempValue2) ;
    MainLayout->addLayout(row1) ;
    MainLayout->addLayout(row2) ;
    MainLayout->addLayout(row3) ;
    setLayout(MainLayout) ;


    connect(convertButton, &QPushButton::clicked, this, &TempWidget::ConvertTemperature);

}


void TempWidget::ConvertTemperature(){
    QString unit = unitfrom->currentText() ;
    double value  = valueLineEdit->text().toDouble() ;
    std::pair<double, double> result = TempConverter::ConvertTemp(value , unit) ;
    if(unit == "Celsius"){
        TempValue1->setText("Kelvin: "+QString::number(result.first)+" k");
        TempValue2->setText("Fahrenhiet: "+QString::number(result.second)+ " f") ;
    }else if (unit == "Kelvin"){
        TempValue1->setText("Celsius: "+QString::number(result.first)+ " c");
        TempValue2->setText("Fahrenhiet: "+QString::number(result.second)+ " f") ;
    }else{
        TempValue1->setText("Celsius: "+QString::number(result.first)+ " c");
        TempValue2->setText("Kelvin: "+QString::number(result.second)+ " k") ;
    }

}

