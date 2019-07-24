#include "../include/Fruit.h"
#include "../include/Parse.h"
using namespace std;

void ash::Fruit::parse() {
    fruit1 = parseString();
    fruit2 = parseString();
    Obj1 = parseObject();
    Obj2 = parseObject();
}

ash::QObject* ash::Fruit::getObj1() {
    return Obj1;
}

ash::QObject* ash::Fruit::getObj2() {
    return Obj2;
}

const string ash::Fruit::getFruit1() {
    return fruit1;
}

const string ash::Fruit::getFruit2() {
    return fruit2;
}

void ash::Fruit::print() {
    cout<< fruit1 << "  "<< fruit2 << endl;
}