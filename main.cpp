//
// Created by cfeng on 4/13/17.
//
#include <iostream>
#include "House.h"
#include <string>

using namespace std;

void printHouse(House);
void aging(int &age);
int getWeight(int age = 500); // Here's the use of optional paramter
int casting();

int main() {
    House house1;
    House house2("Tan", 3, 2, 2500);

    printHouse(house1);
    printHouse(house2);

    int calvinAge = 25;
    aging(calvinAge);
    cout << "Calvin's age: " << calvinAge << endl;

    char temp;
    for (int num = 0; num < 128; num++) {
        temp = num; // Implicit conversion to char
        cout << num << ":" << temp << endl;
    }

    return 0;
}

void printHouse(House house) {
    cout << "House color: " << house.getColor()
         << "Number of bathrooms: " << house.getNumBath()
         << "Number of bedrooms: " << house.getNumBed()
         << "Total Square feet: " << house.getSqft()
         << endl;
}

void aging(int& age) {
    age += 1;
}

int getWeight(int age) {
    if (age > 20) {
        return 165;
    } else {
        return 100;
    }
}

int casting() {
    // Implicit
    int intNum1 = 5 + 12.75;
    double doubleNum1 = 5 + 12.75;
    char x = 65;

    // Explicit
    int intNum2 = 5 + static_cast<int>(12.75);
    double doubleNum2 = static_cast<double>(5) + 12.75;
    char y = static_cast<char>(65);

    return intNum1;
}

