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
    case 0x3:
        cout<<"new a fruit"<<endl;
        return new ash::Fruit;
        break;
    default:
        cout << "No such class!" << endl;
        return new ash::QObject;
        break;
    }
}

int parseInt() {
    cout<<"parsing int"<<endl;
    int i;
    fread(&i, sizeof(int), 1, gFile);
    cout<<i<<endl;
    return i;
}

float parseFloat() {
    float flt;
    fread(&flt, sizeof(float), 1, gFile);
    return flt;
}

string parseString() {
    cout<<"parsing string"<<endl;
    int ilength = parseInt();
    char* temp = new char[ilength];
    fread(temp, ilength, 1, gFile);
    string str(temp);
    delete [] temp;
    cout<<str<<endl;
    return str;
}

ash::QObject* parseObject() {
    int itype = parseInt();
    ash::QObject *obj = getObjectFromName(itype);
    gvecQObjects.push_back(obj);
    if(obj != NULL) {
        obj->parse();
        return obj;
    }
    else {
        return NULL;
    }
}