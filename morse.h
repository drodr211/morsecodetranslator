#ifndef MORSE
#define MORSE

#include <string>
#include <iostream>
#include <cctype>

using namespace std;

string morseArr[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
                    "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", 
                    ".....", "-....", "--...", "---..", "----.", "-----", ".-.-.-", "--..--", "..--..", "/"
};

char englishArr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 
                    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '.', ',', '?', ' '
};

void morse(string s) {
    for(int j = 0; j < s.size(); j++) { 
        for(int i = 0; i < 40; i++) {
            if(englishArr[i] == s.at(j) || englishArr[i] == toupper(s.at(j))) {
                cout << morseArr[i];
            }
        }
        cout << " ";
    }
}

void english(string s) {
    for(int i = 0; i < 40; i++) {
        if(morseArr[i] == s) {
            cout << englishArr[i];
        }
    }
}

#endif 