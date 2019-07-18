#ifndef __QOBJECT_H_
#define __QOBJECT_H_

#include <iostream>

namespace ash
{
    class QObject {
    public:
        QObject();
        virtual void parse();
        ~QObject();
    };
}

#endif