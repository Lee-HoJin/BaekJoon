#include <iostream>
using namespace std;

int main ( void ) {

    int angle[3] = {0, 0, 0};

    cin >> angle[0] >> angle[1] >> angle[2];

    if ( angle[0] + angle[1] + angle[2] != 180 ) {
        cout << "Error" << endl;
        return 0;
    }

    else if ( angle[0] == 60 && angle[1] == angle[2] ) {
        cout << "Equilateral" << endl;
        return 0;
    }

    else if ( angle[0] == angle[1] || angle[1] == angle[2] || angle[0] == angle[2] ) {
        cout << "Isosceles" << endl;
        return 0;
    }

    else {
        cout << "Scalene" << endl;
        return 0;
    }

}