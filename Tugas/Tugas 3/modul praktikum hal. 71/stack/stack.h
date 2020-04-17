#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

typedef int infotype;

struct Stack {
    int info[20];
    int top;
};

void createStack(Stack &S);
void push(Stack &S, infotype X);
infotype pop (Stack &S);
void printInfo(Stack &S);
void balikStack(Stack &S);
void pushAscending(Stack &S, int X);


#endif // STACK_H_INCLUDED
