# Project01

This project is made of 3 parts plus a main Project1.cpp file, with each of the three parts having 2 files associated with each, a header file to initially lay out the functions and variables within each, and the functions themselves. Within the book function, There are three variables, a string for the name, an int for the date of retrival, and a boolean that returns true if the book is renewable, and false if it is not. There is also a pointer to another Book object within this, and this is in order to help create a singly linked list of book objects with an instance of the StuNode class being what provides the header for this. Within the book object, there is the Constructor and a print function.
Next, there is the StuNode class, which is a little bulkier when compared to the book object. 


Within the StuNode class there are three variables, to describe the student's name, their ID, and what year of college they are in, and along with that, there are 5 functions:

Book *SearchBook(string name); Searches for a book object within the given StuNode and returns the book right before the one that has the same name as the parameter, or at the 
end of the list. if 'String name' still cant be found, it returns nullptr.

Book *Bookhead; Pointer to a book header object to serve as the sentinel node for the book linked list.

void insertBook(); Uses CreateBookNode to create a book and inserts it to the back of the list.

void delBook(string name); Uses SearchBook to look for the book with the same name as the parameter and deletes it. If SearchBook returns nullptr, nothing happens.

void printStudent(StuNode *Student); Prints all information in regards to the student.

Book *CreateBookNode(); Creates a book node and returns it as a pointer to the object. 



And finally, there's StudentDList, which has 6 functions instead of the 5 of StuNode. However, there is much more involvement in them.

StuNode *StuHead; Sentinel Node for the StuNode doubly linked list.

StuNode *CreateStuNode(); which creates a Stunode and returns the created pointer object. Similar to CreateBookNode.

StudentDList(); Constructor that sets the sentinal node's next and prev to itself.

StuNode *SearchNode(int ID); Searches the doubly linked list for a StuNode with the same ID as the parameter and returns said object as a pointer.

void InsertStu(); Uses the CreateStuNode function to create a node and puts it at the back of the list right before the header.

void updateStu(); Allows the user to update information about any singular stuNode or their books using a lot of SearchNode and SearchBook.

void DelStu(int ID); Uses SearchNode to help find the node that needs to be deleted and deletes it.

Also contains a main function in Project 01 to have an access point to use the functions, and for the skeleton I had used leftover code from a previous lab I had worked on in order to make things easier.

Funnily enough, id actually say this felt a little easier to work with than normal labs, mostly because I felt like I had a little more freedom with what I did so things didnt seem as limited as before. Id say it looks good, but who knows.

~Mark
