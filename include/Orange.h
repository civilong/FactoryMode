#ifndef __ORANGE_H_
#define __ORANGE_H_
#include "QObject.h"
#include <string>

using namespace std;

namespace ash
{
    class Orange : public ash::QObject {
    public:
        void parse();

        const bool& getSweet();
        const string& getColor();
        const float& getPrice();

        void print();
    private:
        bool bisSweet;
        std::string strColor;
        float fPrice;
    };
}


#endif