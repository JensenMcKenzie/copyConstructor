#include <iostream>
#include "String.h"

using namespace std;

int main() {
    cout << "Create two strings, one using constructor, another an assignment statement" << endl;
    String str1("MiraCosta College");
    String str2 = str1;
    str1.print();
    str2.print();
    cout << "After changing string 2 using change()" << endl;
    str2.change("Cal State San Marcos");
    str1.print();
    str2.print();
    cout << "After changing string 1 using change()" << endl;
    str1.change("UCSD");
    str1.print();
    str2.print();
}
