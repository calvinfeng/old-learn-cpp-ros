//
// Created by cfeng on 4/13/17.
//

#include <iostream>
using namespace std;

void printChange(int&, int&, int&, int&, int&);
void findCoins(int&, int&, int&, int&, int&);

int main() {
    double price;
    double payment;
    char answer = 'y';
    int dollars, quarters, dimes, nickels, pennies;

    while (answer == 'y') {
        cout << "Enter price of an item:" << endl;
        cin >> price;
        cout << "Enter payment from customer:" << endl;
        cin >> payment;

        double change = payment - price;
        dollars = change;
        change = change * 100;

        int coins = change - dollars * 100;
        findCoins(coins, quarters, dimes, nickels, pennies);

        printChange(dollars, quarters, dimes, nickels, pennies);
        cout << "Do you have another transaction?";
        cin >> answer;
    }

    cout << "DONE" << endl;
    return 0;
}

void findCoins(int& coins, int& quarters, int& dimes, int& nickels, int& pennies) {
    quarters = coins / 25;
    dimes = coins % 25 / 10;
    nickels = coins % 25 % 10 / 5;
    pennies = coins % 25 % 10 % 5;
}

void printChange(int& dol, int& q, int& d, int& n, int& p) {
    cout << "dollars: " << dol << endl;
    cout << "quarters: " << q << endl;
    cout << "dimes: " << d << endl;
    cout << "nickels: " << n << endl;
    cout << "pennies: " << p << endl;
}