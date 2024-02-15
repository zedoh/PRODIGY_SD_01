#pragma once

#include <QString>
#include <utility>




class TempConverter{
public:
   static std::pair<double , double> ConvertTemp(double value ,const QString &unit);
};
