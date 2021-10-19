#ifndef STUDENTDLIST_H
#define STUDENTDLIST_H
#include "StuNode.h"

class StudentDList{
    public:
StuNode *StuHead;
StuNode *CreateStuNode();
StudentDList();
StuNode *SearchNode(int ID);
void printAll();
void InsertStu();
void updateStu();
void DelStu(int findID);
void BookMenu();
};

#endif
