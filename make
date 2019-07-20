test: main.o Fruit.o Apple.o Orange.o
    g++ test.o test1.o test2.o -o libtest

Fruit.o: Fruit.cpp
    g++ -c Fruit.cpp

Apple.o: Apple.cpp
    g++ -c Apple.cpp

Orange.o: Orange.cpp
    g++ -c Orange.cpp

-I /