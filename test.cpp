#include "include/QObject.h"
#include "include/Apple.h"
#include "include/Orange.h"
#include "include/Factory.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int ifruit1 = 0x1;
    ash::QObject *test1 = getObjectFromName(ifruit1);
    test1->parse();
    int ifruit2 = 0x2;
    ash::QObject *test2 = getObjectFromName(ifruit2);
    test2->parse();
    return 0;
}