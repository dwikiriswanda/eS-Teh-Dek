#include <iostream>

using namespace std;

typedef int tabInt[];

int countZero(tabInt T, int N) {
    int count;

    if (N < 0) {    // BASE CASE
        return 0;
    } else {    //INDUKSI
        count = 0;
        if (T[N] == 0) {
            count = 1;
        }
        return count + countZero(T, N - 1);
    }
}

int main()
{
    int T[] = {12, 30, 32, 55, 65, 73, 99};
    int N = 7;
    cout << countZero(T, N - 1);
    return 0;
}
