#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class Book{
public:
string Name;
int date;
bool renewable;
Book *next;
Book();
void printBook();
};

#endif
