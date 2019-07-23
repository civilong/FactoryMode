#include "../include/Orange.h"
#include <string>
#include "../include/Parse.h"
using namespace std;

void ash::Orange::parse() {
    fPrice = parseFloat();
    strColor = parseString();
}

const string& ash::Orange::getColor() {
    cout << "The color of orange is " << strColor << endl;
    return strColor;
}

const float& ash::Orange::getPrice() {
    cout<<"The price of orange is " << fPrice <<endl;
    return fPrice;
}