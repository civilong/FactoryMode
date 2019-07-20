#ifndef __FACTORY_H_
#define __FACTORY_H_
#include "QObject.h"
#include "Apple.h"
#include "Orange.h"
#include <map>
#include <string>
using namespace std;

ash::QObject* getObjectFromName(const int &itype);

#endif