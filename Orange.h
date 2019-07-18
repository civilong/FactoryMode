#ifndef __ORANGE_H_
#define __ORANGE_H_
#include "QObject.h"
#include <string>

namespace ash
{
    class Orange : public ash::QObject {
    public:
        Orange();
        void parse();
        bool isSweet();
        void setSweet(const bool &flag);
        std::string getColor();
        void setColor(const std::string &newColor);
        void setPrice(const float &newPrice);
        float getPrice();

    private:
        bool bisSweet;
        std::string strColor;
        float fPrice;
    };
}


#endif