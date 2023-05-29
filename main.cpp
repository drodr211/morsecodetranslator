#include "morse.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("intro.txt");
    if(file.is_open()) cout << file.rdbuf();
    file.close();

    string menuChoice = "0";
    cin >> menuChoice;
    while(menuChoice != "3") {
        string userInput = "~";
        
        if(menuChoice == "1") {
            cout << "Input all text here: ";
            cin >> userInput;
            while(userInput != ";") {
                morse(userInput);
                cout << "/ ";
                cin >> userInput;
            }
            cout << endl << endl;
        }

        if(menuChoice == "2") {
            cout << "Input all morse code here: ";
            cin >> userInput;
            while(userInput != "q") {
                english(userInput); cin >> userInput;
            }
            cout << endl << endl;
        }

        ifstream file("intro.txt");
        if(file.is_open()) cout << file.rdbuf();
        file.close();
        cin >> menuChoice;

    }


    

    return 0;
}