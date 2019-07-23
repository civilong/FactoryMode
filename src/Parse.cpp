#include "../include/Parse.h"
#include <vector>
#include <fstream>
using namespace std;

extern std::vector<ash::QObject*> gvecQObjects;
extern FILE *gFile;

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

int parseInt() {
    int i;
    fread(&i, sizeof(int), 1, gFile);
    return i;
}

float parseFloat() {
    float flt;
    fread(&flt, sizeof(float), 1, gFile);
    return flt;
}

string parseString() {
    int ilength = parseInt();
    string str;
    fread(&str, ilength, 1, gFile);
    return str;
}

ash::QObject* parseObject() {
    int itype = parseInt();
    ash::QObject *obj = getObjectFromName(itype);
    if(obj != NULL) {
        obj->parse();
        gvecQObjects.push_back(obj);
        return obj;
    }
    else {
        return NULL;
    }
}