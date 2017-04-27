#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    // C String
    char s[] = "Hello world";
    puts(s);

    // Using pointer to loop through the array
    for (char *cp = s; *cp; ++cp) {
        printf("%c", *cp);
    }

    cout << endl;

    int a[] = { 1, 2, 3, 4, 5};
    int i = 0;
    printf("The size of a is %d\n", sizeof(a)/sizeof(*a));
    while (i < sizeof(a)/sizeof(*a)) {
        printf("%d\n", a[i]);
        i += 1;
    }

    return 0;
}