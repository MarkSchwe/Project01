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
void setID(int newID);
void setName(string newName);
void setyear(int newYear);
StuNode();
StuNode(int year,string name,int ID);
Book *SearchBook(string name);
Book *Bookhead;
void insertBook();
void delBook(string name);
void printStudent();
Book *CreateBookNode();
void printBooks();
};



#endif
