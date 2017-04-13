//
// Created by cfeng on 4/13/17.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
    vector<int> carVinNumbers;

    vector<int> randomIntegers;

    vector<double> randomPrices;

    int numCars = 5;
    int vinNumber;

    srand(time(0));
    for (int i = 0; i < numCars; i++) {
        carVinNumbers.push_back(rand());
    }

    for (int i = 0; i < numCars; i++) {
        cout << carVinNumbers[i] << endl;
        // carVinNumbers.pop_back();
    }
}