#include <iostream>

using namespace std;

typedef int tabInt[];

int countZero(tabInt T, int N) {
    int i, count;

    i = N - 1;
    count = 0;
    while (i >= 0) {
        if (T[i] == 0) {
            count++;
        }
        i--;
    }
    return count;
}

int main()
{
    int T[] = {12, 30, 32, 55, 65, 73, 99};
    int N = 7;
    cout << countZero(T, N);
    return 0;
}
