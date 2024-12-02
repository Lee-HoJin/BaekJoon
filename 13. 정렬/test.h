#include <iostream>
using namespace std;
#define SWAP(x, y, tmp) ( ( tmp ) = ( x ), ( x ) = ( y ), ( y ) = ( tmp ) )

// https://wing-beat.tistory.com/18

void bubble_sort(int list[], int n) {
    int i, j, tmp;

    for ( int i = n - 1; i > 0; i-- ) {
        // 0부터 ( i - 1 )까지 반복
        for ( j = 0; j < i; j++ ) {
            // j번째와 j + 1번째의 요소가 크기 순이 아니면 교환
            if ( list[j] > list[j + 1] ) {
                tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
            }
        }
    }
}

void selection_sort( int list[], int n ) {
    int i, j, least, tmp;

    for ( i = 0; i < n - 1; i++ ) {
        least = i;

        // 최솟값 탐색
        for ( j = i + 1; j < n; j++ ) {
            if ( list[j] < list[least] ) {
                least = j;
            }
        }

        if ( i != least ) {
            SWAP( list[i], list[least], tmp );
        }

    }
}

void insertion_sort ( int list[], int n ) {
    int i, j, key;

    // index 0 is already sorted
    for ( i = 1; i < n; i++ ) {
        key = list[i]; // 현재 삽입될 숫자인 i번째 정수를 key에 복사

        // 현재 정렬된 배열은 i - 1까지이므로 i - 1부터 역순으로 조사
        // j는 음수가 아니어야 되고(역순으로 조사하니까),
        // key 값보다 정렬된 배열에 있는 값이 크면 j번째를 j + 1번째로 이동
        for ( j = i - 1; j >= 0 && list[j] > key; j-- ) {
            list[j + 1] = list[j]; // 레코드의 오른쪽으로 이동
        }

        list[j + 1] = key;

    }
}

int partition ( int list[], int left, int right ) {
    int pivot, tmp;
    int low, high;

    // pivot을 기준으로 좌 우로 나누고 recursive call

    low = left;
    high = right + 1;
    pivot = list[left];

    do {    

        do {
            low++; // starts from ( left + 1 ), pivot 쪽으로 증가
        } while ( low <= high && list[low] < pivot );
        // list[low]가 pivot보다 작으면 low를 계속 증가
        // swap하기 위해 큰 값 찾을 때까지 증가

        do {
            high--; // starts from ( right ), pivot 쪽으로 감소
        } while ( high >= left && list[high] > pivot );
        // list[high]가 pivot보다 크면 high를 계속 감소

        if ( low < high ) {
            SWAP( list[low], list[high], tmp );
        } // pivot을 기준으로 왼쪽은 pivot보다 작은 숫자, 오른쪽은 큰 숫자로 정렬됨

    } while ( low < high ); // low와 high가 교차할 때까지

    SWAP( list[left], list[high], tmp ); // pivot과 left를 교환

    return high; // pivot의 위치임

}

void quick_sort( int list[], int left, int right ) {
    if ( left < right ) {
        int q = partition(list, left, right); // q가 pivot의 위치

        quick_sort( list, left, q - 1 ); // left to [pivot - 1]
        quick_sort( list, q + 1, right ); // [pivot + 1] to right
    }
}

int sorted[1000];

void merge( int list[], int left, int mid, int right ) {
    int i, j, k, l;
    i = left; // i: 정렬된 왼쪽 리스트에 대한 인덱스
    j = mid + 1; // j: 정렬된 오른쪽 리스트에 대한 인덱스
    k = left; // k: 정렬'될' 리스트에 대한 인덱스

    // 분할 정렬된 list의 합병
    while ( i <= mid && j <= right ) {
        if ( list[i] <= list[j] ) {
            sorted[k++] = list[i++];
        }
        else {
            sorted[k++] = list[j++];
        }
    }

    // 남아 있는 값들을 일괄적으로 복사
    if ( i > mid ) {
        for ( l = j; l <= right; l++ ) {
            sorted[k++] = list[l];
        }
    }
    else {
        for ( l = i; l <= mid; l++ ) {
            sorted[k++] = list[l];
        }
    }

    // 임시 배열에서 찐 배열로 다시 복사
    for ( l = left; l <= right; l++ ) {
        list[l] = sorted[l];
    }

}

void merge_sort(int list[], int left, int right ) {
    int mid;

    if ( left < right ) {
        mid = ( left + right ) / 2;

        merge_sort(list, left, mid);
        merge_sort(list, mid + 1, right);
        merge(list, left, mid, right);
    }
}