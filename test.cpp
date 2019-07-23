#include "include/QObject.h"
#include "include/Apple.h"
#include "include/Orange.h"
#include "include/Parse.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<ash::QObject*> gvecQObjects;
FILE *gFile = fopen("/home/zouwei/Desktop/cpp/fwrite/test", "rb+");

int main() {
    if(gFile != NULL) {
        parseObject();
    }
    
    vector<ash::QObject*>::const_iterator it = gvecQObjects.begin();
    ash::Apple *apple = dynamic_cast<ash::Apple*>(*it);
    apple->print();

    return 0;
}