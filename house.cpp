#include "house.h"
#include <iostream>

using namespace std;

House::House() {
    houseColor = "Blue";
    numBathrooms = 2;
    numBedrooms = 3;
    squareFeet = 1200;
}

House::House(string color, int numBath, int numBed, double sqft) {
    houseColor = color;
    numBathrooms = numBath;
    numBedrooms = numBed;
    squareFeet = sqft;
}

House::~House() {
    cout << "Destroying the house" << endl;
}

string House::getColor() {
    return houseColor;
}

int House::getNumBath() {
    return numBathrooms;
}

int House::getNumBed() {
    return numBedrooms;
}

double House::getSqft() {
    return squareFeet;
};

void House::setColor(string c) {
    houseColor = c;
}

void House::setNumBath(int bath) {
    numBathrooms = bath;
}

void House::setNumBed(int bed) {
    numBedrooms = bed;
}

void House::setSqft(double sqft) {
    squareFeet = sqft;
}
