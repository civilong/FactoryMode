#ifndef __APPLE_H_
#define __APPLE_H_
#include "QObject.h"
#include <iostream>
#include <string>

namespace ash
{
    class Apple : public ash::QObject {
    public:
        Apple();
        void parse();
        void setPrice(const float &newPrice);
        float getPrice();
        void setColor(const std::string &newColor);
        std::string getColor();
        
    private:
        float fPrice;
        std::string strColor;
    };
}

#endif