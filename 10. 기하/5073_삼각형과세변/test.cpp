#include <iostream>
using namespace std;

int main ( void ) {

    int length[3] = {-1, -1, -1};
    int largest = 0, largest_index = 0, other_index_1 = 1, other_index_2 = 2;

    while ( true ) {
        largest = 0, largest_index = 0, other_index_1 = 1, other_index_2 = 2;
        
        cin >> length[0] >> length[1] >> length[2];

        if ( length[0] == 0 && length[1] == 0 && length[2] == 0 ) {
            break;
        }

        else if ( length[0] == 0 || length[1] == 0 || length[2] == 0 ) {
            cout << "Invalid" << endl;
            continue;
        }

        largest = length[0];

        if ( largest < length[1] ) {
            largest = length[1];
            largest_index = 1;
            other_index_1 = 0;
        }

        if ( largest < length[2] ) {
            largest = length[2];

            if ( largest_index == 0 ) {
                largest_index = 2;
                other_index_2 = 0;
            }

            else if ( largest_index == 1 ) {
                largest_index = 2;
                other_index_1 = 0;
                other_index_2 = 1;
            }
        }

        if ( length[largest_index] >= length[other_index_1] + length[other_index_2] ) {
            cout << "Invalid" << endl;
            continue;
        }

        else if ( length[0] == length[1] && length[1] == length[2] ) {
            cout << "Equilateral" << endl;
            continue;
        }

        else if ( length[0] == length[1] || length[1] == length[2] || length[0] == length[2] ) {
            cout << "Isosceles" << endl;
            continue;
        }

        else {
            cout << "Scalene" << endl;
            continue;
        }
    }

    return 0;

}