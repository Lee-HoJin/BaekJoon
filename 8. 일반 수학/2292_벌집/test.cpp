#include <iostream>
using namespace std;

int main() {

    int input = -1;

    cin >> input;

    int comp = 1;
    int step = 1;

    while (1) {
        if (input <= comp) {
            break;
        }
        else {
            comp += 6*step;
        }
        step++;
    }
    
    cout << step << endl;

    return 0;
}