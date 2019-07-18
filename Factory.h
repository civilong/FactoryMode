#ifndef __FACTORY_H_
#define __FACTORY_H_
#include "QObject.h"
#include "Apple.h"
#include "Orange.h"
#include <map>
#include <string>
using namespace std;

static ash::QObject* getObjectFromName(const int &itype) {
    switch(itype) {        
    case 0x1:
        return new ash::Apple;
        break;
    case 0x2:
        return new ash::Orange;
        break;
    default:
        printf("No such class!\n");
        return new ash::QObject;
        break;
    }
}


#endif