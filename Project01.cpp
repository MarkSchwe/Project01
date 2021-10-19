#include<iostream>
#include"StudentDList.h"

int main(){
    StudentDList List;
    int sentinel = 1;
    int ID;
    
        while (sentinel > 0 && sentinel < 7){
        cout << endl << "Menu options:" << endl << "1: Insert a node" << endl << "2: Delete a node" << endl << "3: Print List" << endl << "4: Search a Node" << endl << "5: access book menu " << endl << "6: Update student information " << endl << "7: Quit the program" << endl;
        cin >> sentinel;
        if (sentinel < 0 || sentinel > 7){
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
            List.SearchNode(ID)->Next->printStudent();
        }
        if(sentinel == 5){
            List.BookMenu();
        }
        if(sentinel == 6){
            List.updateStu();
        }
        if(sentinel == 7){
            return 0;
        }
        
    }




    return 0;
}
//Uses code that i used in a previous lab to create a menu to be accessed by the user.
