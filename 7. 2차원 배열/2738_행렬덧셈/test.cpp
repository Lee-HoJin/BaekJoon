#include <iostream>
using namespace std;

int main () {

    int N, M;
    cin >> N;
    cin >> M;

    int matrix_1[N][M], matrix_2[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix_1[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix_2[i][j];
            matrix_2[i][j] += matrix_1[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix_2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}