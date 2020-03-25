#include "Stack.h"

int main()
{
    cout << "Hello World!" << endl;

    int X;
    Stack S, S1;
    createStack(S);

    push(S, 3);
    push(S, 4);
    push(S, 8);
    X = pop(S);
    push(S, 2);
    push(S, 3);
    X = pop(S);
    push(S, 9);
    printInfo(S);
    cout << endl;
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);

    cout << endl << endl;
    cout << "Hello World!" << endl;

    createStack(S1);

    pushAscending(S1, 3);
    pushAscending(S1, 4);
    pushAscending(S1, 8);
    pushAscending(S1, 2);
    pushAscending(S1, 3);
    pushAscending(S1, 9);
    printInfo(S1);
    cout << endl;
    cout << "balik stack" << endl;
    balikStack(S1);
    printInfo(S1);



    return 0;
}
