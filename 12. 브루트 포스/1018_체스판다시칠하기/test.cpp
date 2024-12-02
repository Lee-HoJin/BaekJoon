#include <iostream>
using namespace std;

int main ( void ) {

    int garo, sero;

    cin >> garo >> sero;

    char input[garo][sero];

    int count = 0, min_count = 1251;

    for ( int i = 0; i < garo; i++) {
        for ( int j = 0; j < sero; j++ ) { 
            cin >> input[i][j];
        }
    }

    int token = 1; // W와 B 각각 1, -1
    int index = 0;

    for ( int i = 0; i < garo - ( 8 - 1 ); i++) {
        for ( int j = 0; j < sero - ( 8 - 1 ); j++ ) {
            count = 0;

            token = 1;
            for ( int k = i; k < i + 8; k++ ) {           
                index = 0;     
                for ( int l = j; l < j + 8; l++ ) {
                    if ( token == 1 && input[k][l] == 'B' ) {
                        count++;
                    }

                    else if ( token == -1 && input[k][l] == 'W' ) {
                        count++;
                    }

                    if ( index != 7 ) {
                        token *= -1;
                    }                    
                    index++;
                }
            }

            if ( count < min_count ) {
                min_count = count;
            }
            count = 0;

            token = -1;
            for ( int k = i; k < i + 8; k++ ) {           
                index = 0;     
                for ( int l = j; l < j + 8; l++ ) {
                    if ( token == 1 && input[k][l] == 'B' ) {
                        count++;
                    }

                    else if ( token == -1 && input[k][l] == 'W' ) {
                        count++;
                    }

                    if ( index != 7 ) {
                        token *= -1;
                    }                    
                    index++;
                }
            }

            if ( count < min_count ) {
                min_count = count;
            }
            count = 0;

        }
    }

    cout << min_count << endl;

    return 0;
}