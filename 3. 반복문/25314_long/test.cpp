#include <iostream>
using namespace std;

int main () {

    int input;
    cin >> input;

    while ( input > 3 ) {
        cout << "long ";
        input -= 4;
    }

    cout << "int" << endl;

    return 0;
}