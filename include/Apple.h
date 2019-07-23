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

        const int& getPrice();
        const string& getColor();

        void print();
        
    private:
        int iPrice;
        std::string strColor;
    };
}

#endif