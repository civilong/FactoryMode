#ifndef __APPLE_H_
#define __APPLE_H_
#include "QObject.h"
#include "Orange.h"
#include <iostream>
#include <string>

using namespace std;

namespace ash
{
    class Apple : public ash::QObject {
    public:
        void parse();

        const float& getPrice();
        const string& getColor();

        void print();
        
    private:
        float fPrice;
        std::string strColor;
    };
}

#endif