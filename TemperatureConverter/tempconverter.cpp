#include "tempconverter.h"

std::pair<double, double> TempConverter::ConvertTemp(double value, const QString &unit) {
    if (unit == "Fahrenhiet") {
        double cel = (value-32)*(5.0/9.0) ;
        double kelvin  = (value-32)*(5.0/9.0) + 273.15 ;
        return {cel,kelvin} ;
    } else if (unit == "Kelvin") {
        double cel = value - 273.15  ;
        double fahrn = (value-273.15)*(9.0/5.0) + 32 ;
        return {cel,fahrn} ;
    } else if (unit == "Celsius"){ // Celsius
        double kelvin  = value + 273.15 ;
        double fahrn = value *(9.0/5.0) + 32  ;
        return {kelvin , fahrn} ;
    }
    return std::pair<double, double>() ;
}
