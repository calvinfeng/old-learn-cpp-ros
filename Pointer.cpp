//
// Created by cfeng on 4/13/17.
//

#include <iostream>
using namespace std;

int main() {
    int JohnsAccount = 12345;
    // Ampersand find the memory address of a variable
    int* accountPtr = &JohnsAccount;

    cout << "John's account number: " << JohnsAccount << " is at " << accountPtr << endl;
    cout << "Pointer has a value: " << *accountPtr << endl;

    cout << endl;
    cout << "New example - Integer pointer" << endl;
    int num = 95;
    cout << &num << endl;
    cout << sizeof(num) << endl;
    cout << num << endl;

    int* numPointer = &num;
    *numPointer += 5;
    cout << *numPointer << endl;
    cout << num << endl;
    cout << &num << endl;

    cout << endl;
    cout << "New example - Character pointer" << endl;
    char letter = 'A';
    cout << "Letter: " << letter << endl;
    cout << "Size of letter: " << sizeof(letter) << endl;
    char* charPointer = &letter;
    *charPointer += 25;
    cout << *charPointer << endl;
    cout << letter << endl;


}