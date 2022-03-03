//
// Created by mathe on 2/24/2022.
//
#include <cstring>
#include <iostream>
#ifndef COPYCONSTRUCTOR_STRING_H
#define COPYCONSTRUCTOR_STRING_H


class String {
    char *string;
    int size;
    public :
        String(const char *s = "");
        ~String();
        void print();
        void change(const char *);
        String(const String &);
};
#endif //COPYCONSTRUCTOR_STRING_H
