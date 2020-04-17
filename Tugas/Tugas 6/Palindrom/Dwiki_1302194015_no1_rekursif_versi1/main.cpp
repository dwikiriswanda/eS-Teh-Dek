#include <iostream>

using namespace std;

typedef char text[];

bool isPalindrom(text S, int i, int j) {    // VERSI 1
    bool status;

    if (i > j) {    // BASE CASE 1
        return true;
    } else {
        status = S[i] == S[j];
        if (!status) {    // BASE CASE 2
            return status;
        } else {
            return isPalindrom(S, i + 1, j - 1);
        }
    }
}

int main()
{
    char kalimat[] = {'A', 'D', 'A'};
    cout << boolalpha;
    cout << "Apakah kata tersebut Palindrom? " << isPalindrom(kalimat, 0, 2);
    return 0;
}
