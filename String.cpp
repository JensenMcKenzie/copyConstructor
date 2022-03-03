//
// Created by mathe on 2/24/2022.
//

#include "String.h"
String::String(const char *original){
    size = strlen(original);
    string = new char[size+1];
    strcpy(string, original);
}

void String::change(const char *original){
    delete [] string;
    size = strlen(original);
    string = new char[size+1];
    strcpy(string, original);
}

String::~String(){
    delete [] string;
}

void String::print() {
    for (int i = 0; i < size; i++){
        std::cout << string[i];
    }
    std::cout << "\n";
}

String::String(const String &original){
    size = original.size;
    string = new char[size+1];
    strcpy(string, original.string);
}
