#include "StuNode.h"
#include <iostream>
using namespace std;

StuNode::StuNode(){
Next = this;
Previous = this;
Bookhead = new Book();
}

StuNode::StuNode(int newyear,string newname,int newID){
Next = this;
Previous = this;
Bookhead = nullptr;
year = newyear;
stuName = newname;
ID = newID;
}


Book *StuNode::SearchBook(string name){
Book *newBook = Bookhead;
while(newBook->next->Name != name && newBook->next != nullptr){
    newBook = newBook->next;
}
if(newBook->next != nullptr && newBook->next->Name == name){
    cout << "Book found" << endl;
    return newBook;
} 
cout << "Book not found" << endl;
return nullptr;
}

void StuNode::insertBook(){
    Book *add = CreateBookNode();
Book *newBook = Bookhead;
while(newBook->next != nullptr){
    newBook = newBook->next;
}
newBook->next = add;
}

void StuNode::delBook(string name){
    Book *newBook = SearchBook(name);
    Book *delBook;
    if(newBook->next == nullptr){
        delBook = nullptr;
    } else {
        delBook = newBook->next;
    }
    if(newBook != nullptr && delBook != nullptr){
        if(delBook->next != nullptr){
            newBook->next = delBook->next;
            delete delBook;
        }
        if(delBook->next == nullptr){
            delete delBook;
        }
    }

}

void StuNode::printStudent(){
    cout << "The student's name is " << stuName << endl;
    cout << "The student's ID is " << ID << endl;
    cout << "The student is a ";
    if (year == 1){
        cout << "Freshman" << endl;
    }
    if (year == 2){
        cout << "Sophomore" << endl;
    }
    if (year == 3){
        cout << "Junior" << endl;
    }
    if (year == 4){
        cout << "Senior" << endl;
    }
    cout << "These are the student's books: " << endl;
    printBooks();
}

void StuNode::printBooks(){
Book *newBook = Bookhead;
while(newBook != nullptr){
    if(newBook != Bookhead){
    newBook->printBook();
    }
    newBook = newBook->next;
}
}

Book *StuNode::CreateBookNode(){
Book *newBook = new Book();
string yn;
cout << "Input name of book: ";
cin >> newBook->Name;
cout << endl;
cout << "Input date book was checked out: ";
cin >> newBook->date;
cout << endl;
cout << "Is the book renewable? ";
cin >> yn;
if (yn == "yes"){
    newBook->renewable = true;
}
if (yn == "no"){
    newBook->renewable = false;
}
return newBook;
}

void StuNode::setID(int newID){
    ID = newID;
}
void StuNode::setName(string newName){
    stuName = newName;
}
void StuNode::setyear(int newYear){
    year = newYear;
}
