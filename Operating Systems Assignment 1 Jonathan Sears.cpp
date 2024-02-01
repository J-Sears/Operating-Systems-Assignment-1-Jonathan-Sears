 //Operating Systems Assignment 1 Jonathan Sears.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;



int main()
{
    cout << "Please select a command line function to use. (Press 0 to exit)" << endl << "Press 1 to execute 'dir'" << endl << "Press 2 to execute 'cd'" << endl << "Press 3 to execute 'mkdir'" << endl << "Press 4 to execute 'echo'" << endl << "Press 5 to execute 'type'" << endl;
    int input;
    cin >> input;
    while (input != 0) //Loops until the user decides to exit the menu by inputting 0
    {
        if (input == 1) //reads if the user wants to input the dir command
        {
            system("dir");
        }
        if (input == 2) //reads if the user wants to input the dir command
        {
            system("cd");
        }
        if (input == 3) //reads if the user wants to input the mkdir command
        {
            cout << "Please input the name of the new directory you want to create: ";
            string newDir;
            cin.ignore();
            getline(cin, newDir); //takes in the name of the directory that the user wants to create
            system(("mkdir " + newDir).c_str());
        }
        if (input == 4) //reads if the user wants to input the echo command
        {
            cout << "Please input the mesaage you want to have displayed: ";
            string message;
            cin.ignore();
            getline(cin, message); //takes in whatever message the user wants to display
            system(("echo " + message).c_str());
            cout << endl;
        }
        if (input == 5)
        {
            cout << "Please input the name of the text file you wish to view: ";
            string fileName;
            cin.ignore();
            getline(cin, fileName); //takes in the name of the file that the user wants to read
            system(("type " + fileName).c_str());
            cout << endl;
        }
        cout << "Please select a command line function to use. (Press 0 to exit)" << endl << "Press 1 to execute 'dir'" << endl << "Press 2 to execute 'cd'" << endl << "Press 3 to execute 'mkdir'" <<  endl << "Press 4 to execute 'echo'" << endl << "Press 5 to execute 'type'" << endl;
        cin >> input;
    }

    
    return 0;
}
