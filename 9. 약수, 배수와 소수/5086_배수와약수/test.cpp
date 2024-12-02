#include <iostream>
using namespace std;

int main() {

    int input1, input2;

    while (1) {
        cin >> input1;
        cin >> input2;

        if (input1 == 0 && input2 == 0) {
            break;
        }

        if (input1 < input2 && input2 % input1 == 0) {
            cout << "factor" << endl;
        }
        else if (input1 > input2 && input1 % input2 == 0) {
            cout << "multiple" << endl;
        }
        else {
            cout << "neither" << endl;
        }
    }

    return 0;
}