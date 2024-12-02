#include <iostream>
#include <cstdio>
using namespace std;

int main () {

    string input[5];

    for (int i = 0; i < 5; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < input[j].size()) {
                cout << input[j][i];
            }
        }
    }

    cout << endl;

    return 0;
}