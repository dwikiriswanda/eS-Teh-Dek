#ifndef HEADER_1302194015_H_INCLUDED
#define HEADER_1302194015_H_INCLUDED
#define Top(S) S.Top
#define info(S) S.info
#include<iostream>

using namespace std;

const int nMax = 5;
typedef int infotype;

struct stack{
    infotype info[nMax];
    int Top;
};

void createStack(stack &S);
void push(stack &S, infotype x);
void pop(stack &S, infotype x);
void printStack(stack S);
void deleteData(stack &S, infotype x);

#endif // HEADER_1302194015_H_INCLUDED
