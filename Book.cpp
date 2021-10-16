#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(){
next = nullptr;
}

void Book::printBook(){
cout << "The Books name is " << Name << endl;
cout << "It was checked out on " << date << endl;
if (renewable == true){
cout << "The book is renewable. " << endl;
} else {
    cout << "The book is not renewable. " << endl;
}
}
