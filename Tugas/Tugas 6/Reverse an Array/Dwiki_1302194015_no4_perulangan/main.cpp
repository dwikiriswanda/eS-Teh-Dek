#include <iostream>

using namespace std;

typedef int tabInt[];

void Reverse(tabInt T, int N) {
    int i, j, temp;

    j = N - 1;
    i = 0;
    while (i <= j) {
        temp = T[i];
        T[i] = T[j];
        T[j] = temp;
        i++; j--;
    }
}

int main()
{
    int T[] = {12, 30, 32, 55, 65, 73, 99};
    int N = 7;
    Reverse(T, N);
    for (int i = 0; i < 7; i++) {
        cout << T[i] << " ";
    }
    return 0;
}
