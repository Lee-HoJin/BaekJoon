#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int total = 0;
    vector<int> vec(5);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vec[i]);
        total += vec[i];
    }
    sort(vec.begin(), vec.end());

    printf("%d\n%d", total / 5, vec[2]);

    return 0;
}