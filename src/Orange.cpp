#include "../include/Orange.h"
#include <string>
#include "../include/Parse.h"
using namespace std;

void ash::Orange::parse() {
    fPrice = parseFloat();
    strColor = parseString();
}

const string& ash::Orange::getColor() {    
    return strColor;
}

const float& ash::Orange::getPrice() {   
    return fPrice;
}

void ash::Orange::print() {
    cout <<"The price of orange is " << fPrice <<endl;
    cout << "The color of orange is " << strColor << endl;
}