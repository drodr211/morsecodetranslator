#ifndef MORSE
#define MORSE

#include <string>
#include <iostream>
#include <map>
using namespace std;

string morseArr[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
                    "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", 
                    ".....", "-....", "--...", "---..", "----.", "-----", ".-.-.-", "--..--", "..--.."
};

string englishArr[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", 
                    "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", ".", ",", "?"
};

void morse(string s) {
    for(int i = 0; i < 39; i++) {
        if(englishArr[i] == s) {
            cout << morseArr[i] << " ";
        }
    }
}

void english(string s) {
    for(int i = 0; i < 39; i++) {
        if(morseArr[i] == s) {
            cout << englishArr[i] << " ";
        }
    }
}

#endif 