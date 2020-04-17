#include <iostream>

using namespace std;

typedef char text[];

bool isPalindrom(text S, int N) {
    int i;
    int j;
    bool status;

    status = true;
    i = 0;
    j = N - 1;
    while (i <= j && status) {
        status = S[i] == S[j];
        i++;
        j++;
    }
    return status;
}

int main()
{
    char kalimat[] = {'K', 'A', 'T', 'A', 'K'};
	cout << boolalpha;
    cout << isPalindrom(kalimat, 5);
    return 0;
}
