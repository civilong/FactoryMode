#ifndef __FRUIT_H_
#define __FRUIT_H_
#include "QObject.h"
#include <string>
using namespace std;

namespace ash {
    class Fruit : public QObject {
    public:
        void parse();

        const string getFruit1();
        const string getFruit2();
        QObject* getObj1();
        QObject* getObj2();
        void print();

    private:
        string fruit1;
        string fruit2;
        QObject *Obj1;
        QObject *Obj2;
    };
}

#endif