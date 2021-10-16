#include "StuNode.h"
#include <iostream>
using namespace std;

StuNode::StuNode(){
Next = this;
Previous = this;
Bookhead = nullptr;
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
add = newBook->next;
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

void StuNode::printStudent(StuNode *Student){
    cout << "The student's name is " << Student->stuName << endl;
    cout << "The student's ID is " << Student->ID << endl;
    cout << "The student is a ";
    if (Student->year == 1){
        cout << "Freshman" << endl;
    }
    if (Student->year == 2){
        cout << "Sophomore" << endl;
    }
    if (Student->year == 3){
        cout << "Junior" << endl;
    }
    if (Student->year == 4){
        cout << "Senior" << endl;
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
