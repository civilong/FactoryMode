CC = g++

OBJECTS = QObject.o Apple.o Orange.o Factory.o

Ash.so : $(OBJECTS)
	$(CC) -shared -o Ash.so $(OBJECTS)

QObject.o : ../include/QObject.h
	$(CC) -c -fPIC -o QObject.o QObject.cpp
Apple.o : ../include/Apple.h ../include/QObject.h
	$(CC) -c -fPIC -o Apple.o Apple.cpp
Orange.o : ../include/Orange.h ../include/QObject.h
	$(CC) -c -fPIC -o Orange.o Orange.cpp
Factory.o : ../include/Factory.h ../include/QObject.h ../include/Apple.h ../include/Orange.h
	$(CC) -c -fPIC -o Factory.o Factory.cpp

.PHONY : clean
clean:
	rm edit $(OBJECTS)