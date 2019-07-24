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

        const string& getColor();
        const float& getPrice();

        void print();
    private:
        std::string strColor;
        float fPrice;
    };
}


#endif