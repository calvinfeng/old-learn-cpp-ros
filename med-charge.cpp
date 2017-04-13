#include <iostream>
using namespace std;

// Function overloading
double calculateCharges(int, double, double, double);
double calculateCharges(double, double);

int main() {
    int days;
    double dailyRate, medCharges, labCharges, totalDue;
    bool inpatient = false;
    char answer;

    cout << "Is this an inpatient stay?" <<endl;
    cin >> answer;

    while (answer != 'y' && answer != 'n') {
        cout << "Please enter y/n" << endl;
        cin >> answer;
    }

    if (answer == 'y')
        inpatient = true;
    else
        inpatient = false;

    cout << "Enter the total medication charges: " << endl;
    cin >> medCharges;
    cout << "Enter the total lab charges: " <<endl;
    cin >> labCharges;

    if (inpatient) {
        cout << calculateCharges(100, 5, medCharges, labCharges);
    } else {
        cout << calculateCharges(medCharges, labCharges);
    }
}

double calculateCharges(int days, double rate, double m, double l) {
    return days * rate + m + l;
}

double calculateCharges(double m, double l) {
    return m + l;
}