#ifndef STUDENTDLIST_H
#define STUDENTDLIST_H
#include "StuNode.h"

class StudentDList{
    public:
StuNode *StuHead;
StuNode *CreateStuNode();
StudentDList();
StuNode *SearchNode(int ID);
//Create
void InsertStu();
//Update
void updateStu();
//Delete
void DelStu(int ID);
};

#endif
