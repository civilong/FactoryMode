#include "../include/Apple.h"
#include <iostream>
#include <string.h>
#include "../include/Parse.h"
using namespace std;

void ash::Apple::parse() {
    iPrice = parseInt();
    strColor = parseString();
}

const int& ash::Apple::getPrice() {
    cout<< "The price of apple is " << iPrice << endl;
    return iPrice;
}

const std::string& ash::Apple::getColor() {
    cout << "The color of apple is " << strColor << endl;
    return strColor;
}

void ash::Apple::print() {
    cout<< "The price of apple is " << iPrice << endl;
    cout << "The color of apple is " << strColor << endl;
}