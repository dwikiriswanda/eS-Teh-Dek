#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int tabInt[];

void Reverse(tabInt &T, int i, int j) {
    int temp;

    // BASE CASE i > j dan tidak ada aksi
    if (i <= j) {   // INDUKSI
        temp = T[i];
        T[i] = T[j];
        T[j] = temp;
        Reverse(T, i + 1, j - 1);
    }
}

int main()
{
    int T[] = {12, 30, 32, 55, 65, 73, 99};
    int N = 7;
    Reverse(T, 0, N - 1);
    return 0;
}
