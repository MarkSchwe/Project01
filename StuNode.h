#ifndef STUNODE_H
#define STUNODE_H
#include "Book.h"
#include <iostream>
using namespace std;
class StuNode{
    public:
string stuName;
int ID;
int year;
StuNode *Next;
StuNode *Previous;
StuNode *CreateStuNode();
Book *SearchBook(string name);
Book *Bookhead;
void insertBook();
void delBook(string name);
void printStudent(StuNode *Student);
Book *CreateBookNode();
};



#endif
