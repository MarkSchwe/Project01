#include<iostream>
#include"StudentDList.h"

int main(){
    StudentDList List;
    int sentinel = 1;
    int ID;
    while(sentinel != 5){
        while (sentinel > 0 && sentinel < 5){
        cout << "Menu options:" << endl << "1: Insert a node" << endl << "2: Delete a node" << endl << "3: Print List" << endl << "4: Search a Node" << endl << "5: Quit the program" << endl;
        cin >> sentinel;
        if (sentinel < 0 || sentinel > 5){
            cout << "Invalid input." << endl;
        }
        if (sentinel == 1){
            List.InsertStu();
        }
        if (sentinel == 2){
            cout << "Input ID to delete: ";
            cin >> ID;
            List.DelStu(ID);
        }
        if (sentinel == 3){
            List.printAll();
        }
        if (sentinel == 4){
            cout << "Input ID: ";
            cin >> ID;
            List.SearchNode(ID);
        }
        if(sentinel == 5){
            return 0;
        }
        }
    }




    return 0;
}
//Uses code that i used in a previous lab to create a menu to be accessed by the user.
