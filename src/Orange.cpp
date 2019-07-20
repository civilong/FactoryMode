#include "../include/Orange.h"
#include <string>
using namespace std;

ash::Orange::Orange() {
    bisSweet = true;
    strColor = "yellow";
    fPrice = 2.0;
}

void ash::Orange::parse() {
    getColor();
    getPrice();
}

bool ash::Orange::isSweet() {
    return bisSweet;
}

void ash::Orange::setSweet(const bool &flag) {
    bisSweet = flag;
}

void ash::Orange::setColor(const std::string &newColor) {
    strColor = newColor;
}

std::string ash::Orange::getColor() {
    cout << "The color of orange is " << strColor << endl;
    return strColor;
}

void ash::Orange::setPrice(const float &newPrice) {
    fPrice = newPrice;
}

float ash::Orange::getPrice() {
    cout<<"The price of orange is " << fPrice <<endl;
    return fPrice;
}