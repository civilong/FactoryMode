CC = g++

OBJECTS = QObject.o Apple.o Orange.o Parse.o

Ash.so : $(OBJECTS)
	$(CC) -shared -o Ash.so $(OBJECTS)

QObject.o : ../include/QObject.h
	$(CC) -c -fPIC -o QObject.o QObject.cpp
Apple.o : ../include/Apple.h ../include/QObject.h ../include/Parse.h
	$(CC) -c -fPIC -o Apple.o Apple.cpp
Orange.o : ../include/Orange.h ../include/QObject.h ../include/Parse.h
	$(CC) -c -fPIC -o Orange.o Orange.cpp
Parse.o : ../include/Parse.h ../include/QObject.h ../include/Apple.h ../include/Orange.h
	$(CC) -c -fPIC -o Parse.o Parse.cpp

.PHONY : clean
clean:
	rm edit $(OBJECTS)