 //Operating Systems Assignment 1 Jonathan Sears.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    cout << "Please select a command line function to use. (Press 0 to exit)" << endl << "Press 1 to execute 'dir'" << endl << "Press 2 to execute 'cd'" << endl << "Press 3 to execute 'mkdir'" << endl << "Press 4 to execute 'echo'" << endl << "Press 5 to execute 'type'" << endl << "Press 6 to execute 'concat'" << endl;
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
            getline(cin, message); //takes in whatever message the user wants to display. Use "testing.txt" as a test for this command
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
        if (input == 6)
        {
            ifstream fileName1, fileName2;
            ofstream outputFile("Concat_File.txt"); //Creates the output file for the concat operation
            char ch1, ch2;
            string file1, file2; 
            cout << "Please input the name of the first file you wish to concatinate: ";
            cin >> file1; //takes in the input for the first file name
            cout << "Please input the name of the second file you wish to concatinate: ";
            cin >> file2; //takes in the input for the second file name
            fileName1.open(file1);
            fileName2.open(file2);
            if (!fileName1 || !fileName2) //checks to make sure both of the files can be opened
            {
                cout << "Error one of or both of the files you input could not be opened! (Make sure the files end with .txt)" << endl;
                break;
            }
            while (fileName1.eof() == 0) //loops through the first file and writes it to the output file
            {
                fileName1 >> ch1;
                outputFile << ch1;
            }
            while (fileName2.eof() == 0) //loops through the second file and writes it to the output file
            {
                fileName2 >> ch2;
                outputFile << ch2;
            }
            cout << file1 << " and " << file2 << " have successfully been concatinated together and the output has been put into 'Concat_File.txt'" << endl;
            fileName1.close();
            fileName2.close();
            outputFile.close();
        }
        cout << "Please select a command line function to use. (Press 0 to exit)" << endl << "Press 1 to execute 'dir'" << endl << "Press 2 to execute 'cd'" << endl << "Press 3 to execute 'mkdir'" << endl << "Press 4 to execute 'echo'" << endl << "Press 5 to execute 'type'" << endl << "Press 6 to execute 'concat'" << endl;
        cin >> input;
    }

    remove("Concat_File.txt"); //removes the concatinated file once the user ends the program

    return 0;
}
