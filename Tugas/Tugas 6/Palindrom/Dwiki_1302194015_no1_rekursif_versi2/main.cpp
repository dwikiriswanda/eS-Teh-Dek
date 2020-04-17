#include <iostream>

using namespace std;

typedef char text[];

bool isPalindrom(text S, int i, int j) {    // VERSI 2
    bool status;

    if (i > j) {    // BASE CASE 1
        return true;
    } else {    // INDUKSI
        status = S[i] == S[j];
        return isPalindrom(S, i + 1, j - 1) && status;
    }
}

int main()
{
    char kalimat[] = {'I', 'b', 'u', 'R', 'a', 't', 'n', 'a', 'a', 'n', 't', 'a', 'R', 'u', 'b', 'I'};
	cout << boolalpha;
    cout << "Apakah kata tersebut Palindrom? " << isPalindrom(kalimat, 0, 15);
    return 0;
}
