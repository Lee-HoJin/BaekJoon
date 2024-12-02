#include <iostream>
using namespace std;

int main ( void ) {

    int king = 1;
    int queen = 1;
    int rook = 2;
    int bishop = 2;
    int knight = 2;
    int pawn = 8;

    int correct_list[6] = {king, queen, rook, bishop, knight, pawn};

    int input = 0;
    for ( int i = 0; i < 6; i++ ) {
        cin >> input;
        cout << correct_list[i] - input << " ";
    }
    
    cout << endl;

    return 0;
}