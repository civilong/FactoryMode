#include "../include/Factory.h"
using namespace std;

ash::QObject* getObjectFromName(const int &itype) {
    switch(itype) {        
    case 0x1:
        return new ash::Apple;
        break;
    case 0x2:
        return new ash::Orange;
        break;
    default:
        cout << "No such class!" << endl;
        return new ash::QObject;
        break;
    }
}