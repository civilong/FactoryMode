#include "../include/Apple.h"
#include <iostream>
#include <string.h>
#include "../include/Parse.h"
using namespace std;

void ash::Apple::parse() {
    fPrice = parseFloat();
    strColor = parseString();
}

const float& ash::Apple::getPrice() {
    return fPrice;
}

const std::string& ash::Apple::getColor() {
    return strColor;
}

void ash::Apple::print() {
    cout << "The price of apple is " << fPrice << endl;
    cout << "The color of apple is " << strColor << endl;
}