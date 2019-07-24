#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

char* path = "/home/zouwei/Desktop/cpp/fwrite/test";
FILE *fp = fopen(path, "wb");

void writeString(const string& str) {
    auto len = str.length();
    const char* pstr = str.c_str();
    cout<<"length is: "<<len<<endl;
    fwrite(pstr, len, 1, fp); 
}

void writeInt(const int& i) {
    fwrite(&i, sizeof(int), 1, fp);
}

void writeFloat(const float& flt) {
    fwrite(&flt, sizeof(float), 1, fp);
}

int main() {
    int i1 = 3;
    writeInt(i1);
    int i2 = 5;
    writeInt(i2);
    string str1 = "Apple";
    writeString(str1);
    int i3 = 6;
    writeInt(i3);
    string str2 = "Orange";
    writeString(str2);
    int i4 = 1;
    writeInt(i4);
    float f1 = 10.0;
    writeFloat(f1);
    int i5 = 3;
    writeInt(i5);
    string str3 = "red";
    writeString(str3);
    int i6 = 2;
    writeInt(i6);
    float f2 = 5.0;
    writeFloat(f2);
    int i7 = 6;
    writeInt(i7);
    string str4 = "yellow";    
    writeString(str4);


    fclose(fp);
    return 0;
}
