#include <iostream>
using namespace std;

int main () {

    int i, j, largest = -1;

    int input[9][9];
    int cord_x, cord_y;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            cin >> input[i][j];
            if (largest < input[i][j]) {
                largest = input[i][j];
                cord_x = i + 1;
                cord_y = j + 1;
            }

        }
    }

    cout << largest << endl;
    cout << cord_x << " " << cord_y << endl;

    return 0;
}