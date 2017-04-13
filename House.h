#ifndef CPPTUTORIALS_HOUSE_H
#define CPPTUTORIALS_HOUSE_H

#include <string>
using namespace std;

class House {
    private:
        string houseColor;
        int numBathrooms;
        int numBedrooms;
        double squareFeet;

    public:
        // constructor
        House();
        House(string, int, int, double);

        // destructor
        ~House();

        // accessor
        string getColor();
        int getNumBath();
        int getNumBed();
        double getSqft();

        // mutator
        void setColor(string);
        void setNumBath(int);
        void setNumBed(int);
        void setSqft(double);
};

#endif //CPPTUTORIALS_HOUSE_H
