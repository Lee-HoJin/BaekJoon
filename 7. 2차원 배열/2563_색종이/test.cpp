#include <iostream>
using namespace std;

int main () {

    int plane[100][100];
    int black_area = 0;
    
    // 초기화
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            plane[i][j] = 0;
        }
    } 

    int case_num;
    cin >> case_num;

    int x_cord, y_cord;
    int overlapped_x, overlapped_y;

    while (case_num > 0) {  
        x_cord = 0, y_cord = 0;
        black_area += 100;

        cin >> x_cord;
        cin >> y_cord;

        for (int i = x_cord; i < x_cord + 10; i++ ) {
            for (int j = y_cord; j < y_cord + 10; j++ ) {
                if ( plane[i][j] == 1 ) {
                   black_area--;
                }
                else {
                     plane[i][j] = 1;
                }
            }
        }

        // 처음에 넓이 100을 저장했다가
        // 중간에 1을 만나면 그만큼 빼는 걸로?
        case_num--;
    }

    cout << black_area << endl;
    
    return 0;
}