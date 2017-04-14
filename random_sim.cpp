#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    // srand allows us to "see" the random number;
    srand(time(0));

    int count = 0;
    const long long int numOfIteration = 10000000000;
    for (int i = 0; i < numOfIteration; i++) {
        int die1 = rand()%6 + 1;
        int die2 = rand()%6 + 1;

        if (die1 == 1 && die2 == 1) {
            count ++;
        }
    }
    cout << "Snake eyes percentage: " << static_cast<double>(count) / numOfIteration << endl;
    return 0;
}
