//
// Created by cfeng on 4/13/17.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    /**
     * Pointers and References
     */

    int x = 5;

    // Creating a pointer to x
    int *xPointer = &x;

    // Creating a reference to x
    int &xReference = x;

    printf("The value of x is %d\n", x);
    printf("The value of pointer to x is %d\n", *xPointer);
    printf("The value of reference to x is %d\n", xReference);

    cout << endl;
    puts("Modifying x");

    x = 50;

    printf("The value of x is %d\n", x);
    printf("The value of pointer to x is %d\n", *xPointer);
    printf("The value of reference to x is %d\n", xReference);

    cout << endl;
    puts("Modifying x reference");

    int z = 88;
    xPointer = &z;

    printf("The value of x is %d\n", x);
    printf("The value of pointer to x is %d\n", *xPointer);
    printf("The value of reference to x is %d\n", xReference);

    return 0;
}
