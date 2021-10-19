#include "StudentDList.h"
#include "StuNode.h"
#include "Book.h"
#include <iostream>
using namespace std;

StuNode *StudentDList::CreateStuNode(){
    string newName;
    int newID;
    int newyear;
cout << "Input name: ";
cin >> newName;
cout << "Input ID: ";
cin >> newID;
cout << "What year is this student in? ";
while(newyear <1 || newyear > 4){
cin >> newyear;
if(newyear <1 || newyear > 4){
cout << "Invalid input" << endl;
}
}
StuNode *newNode = new StuNode(newyear, newName, newID);

return newNode;
}

void StudentDList::printAll(){
    StuNode *print = StuHead->Next;
    while(print != StuHead){
        print->printStudent();
        print = print->Next;
        cout << endl;
    }
}

StudentDList::StudentDList(){
    StuHead = new StuNode();
}



void StudentDList::InsertStu(){
StuNode* Created = CreateStuNode();
Created->Previous = StuHead->Previous;
Created->Next = StuHead;
StuHead->Previous->Next = Created;
StuHead->Previous = Created;
}


void StudentDList::updateStu(){
StuNode *Search;
    int IDupdate;
cout << "Enter ID of student to have information updated: ";
cin >> IDupdate;
Search = SearchNode(IDupdate);
if (Search == nullptr){
    cout << "Student not found" << endl;
    return;
}
int choice = 0;
while (choice < 1 || choice > 3){
cout << "Input option:  (1 is to update name, 2 to update ID, and 3 to update year. )";
cin >> choice;
}
cout << endl;
if(choice == 1){
cout << "Input new name: ";
cin >> Search->stuName;
}
if(choice == 2){
cout << "Input new ID: ";
cin >> Search->ID;
}
if(choice == 3){
int year = 0;
cout << "Input year: ";
while(year < 1 || year > 4){
    cin >> year;
    if (year < 1 || year > 4){
        cout << "Invalid input." << endl;
    }
}
}
string yn = "";
cout << "Update Book selection? "<< endl;
while (yn != "yes" && yn != "no"){
cin >> yn;
if (yn != "yes" && yn != "no"){
    cout << "invalid Input" << endl;
}
}
string option;
if (yn == "yes"){
    cout << "Input decition: (del for delete, add for add, upd for update) ";
    while (option != "del" && option != "add" && option != "upd"){
        cin >> option;
        if (option != "del" && option != "add" && option != "upd"){
            cout << "Invalid option" << endl;
        }
    }
    string bookname;
    if (option == "del"){
        cout << "input name of book: ";
        cin >> bookname;
        Search->delBook(bookname);
    }
    if (option == "add"){
        Search->insertBook();
    }
    if (option == "upd"){
        cout << "input name of book: ";
        cin >> bookname;
        Book *SearchB = Search->SearchBook(bookname)->next;
        string input20;
        while (input20 != "name" && input20 != "date" && input20 != "ren"){
        cout << "Input what you want to change: (name for name, date for date, & ren for renewability) ";
        cin >> input20;
        if(input20 != "name" && input20 != "date" && input20 != "ren"){
            cout << "Invalid input" << endl;
        }
        }
        if(input20 == "name"){
            cout << "Input new name: ";
            cin >> SearchB->Name;
        }
        if(input20 == "date"){
            cout << "Input new date of check out: ";
            cin >> SearchB->date;
        }
        if(input20 == "ren"){
            cout << "Input whether or not it is renewable: ";
            string inp200;
            while(inp200 != "yes" && inp200 != "no"){
                cin >> inp200;
                if(inp200 != "yes" && inp200 != "no"){
                    cout << "Invalid input" << endl;
                }
            }
            if(inp200 == "yes"){
                SearchB->renewable = true;
            }
            if(inp200 == "no"){
                SearchB->renewable = false;
            }
        }
    }
}
if (yn == "no"){
    return;
}
}

void StudentDList::DelStu(int findID){
StuNode *befDel = SearchNode(findID);
StuNode *del = befDel->Next;
if(del == nullptr || del == StuHead){
return;
}
if(del != nullptr){
befDel->Next = del->Next;
del->Next->Previous = befDel;
delete del;
}
}


//Before thing with ID
StuNode *StudentDList::SearchNode(int IDnum){
StuNode *Search = StuHead;
while (Search->Next != StuHead && Search->Next->ID != IDnum){
Search = Search->Next;
}
if (Search->Next->ID == IDnum){
    cout << "Student found" << endl;
    return Search;
} else if (Search->Next == StuHead){
    cout << "Student Not found";
    return nullptr;
}
return Search;
}


void StudentDList::BookMenu(){
    StuNode *checkNode;
    int check, option;
    string bookName;
    cout << "Input ID for books to check: ";
    cin >> check;
    checkNode = SearchNode(check);
    if(checkNode != nullptr){
        cout << "Menu options:" << endl << "1: Insert a book" << endl << "2: Delete a book" << endl << "3: Print Book List" << endl;
    while (option <1 || option > 3){
        cin >> option;
        if (option < 1 || option > 3){
            cout << "Invalid input" << endl;
        }
    }
    if(option == 1){
        checkNode->insertBook();
    }
    if(option == 2){
        cout << "Input name of book to delete: ";
        cin >> bookName;
        checkNode->delBook(bookName);
    }
    if(option == 3){
        checkNode->printBooks();
    }

    }

}
