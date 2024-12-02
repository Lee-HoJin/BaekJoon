#include <iostream>
using namespace std;
#define SWAP(x, y, tmp) ( ( tmp ) = ( x ), ( x ) = ( y ), ( y ) = ( tmp ) )

void selection_sort_x( string list[], int n ) {
    int i, j, least;
    string tmp;

    for ( i = 0; i < n - 1; i++ ) {
        least = i;

        // 최솟값 탐색
        for ( j = i + 1; j < n; j++ ) {
            if ( list[j][0] < list[least][0] ) {
                least = j;
            }
        }

        if ( i != least ) {
            SWAP( list[i], list[least], tmp );
        }

    }
}

void selection_sort_y( string list[], int start, int n ) {
    int i, j, least;
    string tmp;

    for ( i = start; i < start + n - 1; i++ ) {
        least = i;

        // 최솟값 탐색
        for ( j = i + 1; j < start + n; j++ ) {
            if ( list[j][1] < list[least][1] ) {
                least = j;
            }
        }

        if ( i != least ) {
            SWAP( list[i], list[least], tmp );
        }

    }
}

int main ( void ) {

    int num = 0;
    cin >> num;

    string coordinates[num + 1];
    string buffer;

    getline(cin, buffer);
    
    for ( int i = 0; i < num; i++ ) {
        getline(cin, coordinates[i]);
    }

    selection_sort_x( coordinates, num );

    int j = 0;
    for ( int i = 0; i < num; i++ ) {
        j = 1;
        while ( ( i + j ) < num && coordinates[i][0] == coordinates[i + j][0]) {
            j++;
        }

        if ( j != 1 ) { 
            cout << "j - " << j << endl;
            selection_sort_y( coordinates, i, j );
        }

        i += j - 1;
    }

    cout << "------" << endl;
    for ( int i = 0; i < num; i++ ) {
        cout << coordinates[i] << endl;
    }

    return 0;
}