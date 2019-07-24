#include "include/QObject.h"
#include "include/Apple.h"
#include "include/Orange.h"
#include "include/Parse.h"
#include "include/Fruit.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<ash::QObject*> gvecQObjects;
FILE *gFile = fopen("/home/zouwei/Desktop/cpp/fwrite/test", "rb+");

int main() {
    if(gFile != NULL) {
        cout<<"begin parse"<<endl;
        parseObject();
    }
    else {
        fclose(gFile);
        return 0;
    }
    
    /* vector<ash::QObject*>::const_iterator it = gvecQObjects.begin();
    if(*it != NULL) {
        ash::Apple *apple = dynamic_cast<ash::Apple*>(*it);
        apple->print();
    }*/

    vector<ash::QObject*>::const_iterator it = gvecQObjects.begin();
    if(*it != NULL) {
        ash::Fruit *fruit = dynamic_cast<ash::Fruit*>(*it);
        fruit->print();
        ash::Apple *apple = dynamic_cast<ash::Apple*>(fruit->getObj1());
        apple->print();
        ash::Orange *orange = dynamic_cast<ash::Orange*>(fruit->getObj2());
        orange->print();
    }

    for(vector<ash::QObject*>::const_iterator it = gvecQObjects.begin(); it != gvecQObjects.begin(); it++) {
        delete *it;
    }

    fclose(gFile);
    return 0;
}