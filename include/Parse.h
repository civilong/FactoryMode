#ifndef __PARSE_H_
#define __PARSE_H_
#include "QObject.h"
#include "Apple.h"
#include "Orange.h"
#include <string>

using namespace std;

ash::QObject* getObjectFromName(const int &itype);

int parseInt();

float parseFloat();

string parseString();

ash::QObject* parseObject();

#endif