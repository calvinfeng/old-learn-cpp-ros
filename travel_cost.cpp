#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double mpg, distance, gallons, pricePerGallon, totalCost;

    cout << "Enter mpg" << endl;
    cin >> mpg;

    cout << "Enter distance in miles:" << endl;
    cin >> distance;

    cout << "Enter price for one gallon of gas:" << endl;
    cin >> pricePerGallon;

    gallons = distance / mpg;
    totalCost = gallons * pricePerGallon;

    cout << "Total trip cost: $" << fixed << setprecision(2) << totalCost << endl;
    return 0;
}

/*
    Integer, Long, and Short
    Double and Float
    Character and Bool

    Char - 1 byte
    Short - 2 byte
    Integer, Long, and Float - 4 bytes
    Double - 8 bytes
 */
