//
// Created by cfeng on 4/13/17.
//

struct Address {
    char houseNum[5];
    char streetName[30];
    char city[30];
    char state[3];
    int zipcode;
};

struct DateOfBirth {
    int month;
    int day;
    int year;
};

struct Employee {
    char firstName[30];
    char lastName[30];
    int eeNumber;
    double hourlyWage;
    Address homeAddress;
    DateOfBirth dob;
};

void printEes(Employee[], int);

int main() {
    int numEmployees:
    cout << "How many employees do you have? \n";
    cin >> numEployees;

    Employee employees[numEmployees];
}
