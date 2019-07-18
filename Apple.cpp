#include "Apple.h"
#include <iostream>
#include <string.h>
using namespace std;

ash::Apple::Apple() {
    fPrice  = 5.0;
    strColor = "Red";
}

void ash::Apple::parse() {
    getColor();
    getPrice();
}

void ash::Apple::setPrice(const float &newPrice) {
    fPrice = newPrice;
}

float ash::Apple::getPrice() {
    cout<< "The price of apple is " << fPrice << endl;
    return fPrice;    
}

void ash::Apple::setColor(const std::string &newColor) {
    strColor = newColor;
}

std::string ash::Apple::getColor() {
    cout << "The color of apple is " << strColor << endl;
    return strColor;
}