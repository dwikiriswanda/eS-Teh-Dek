#include "stack_1302194015.h"

void createStack(stack &S){
    S.Top = -1;
}
bool isEmpty(stack S){
    if(S.Top == -1 ){
        return true;
    }else{
        return false;
    }
}
bool isFull(stack S){
    if(S.Top == 9){
        return true;
    }else{
        return false;
    }
}
void push(stack &S, infotype x){
    if (isFull(S) == false ){
        S.Top ++;
        S.info[S.Top] = x;
    }
}
infotype pop(stack &S){
    infotype x;
    x = S.info[S.Top];
    S.Top = S.Top - 1;
    return x;
}
void printInfo(stack S){
    int i;
    for(i = S.Top; i >= 0; i--){
        cout<<(S.info[i])<<" ";
    }
}
void ascending(stack &S){
    int i, j, tmp;

    for(i = 1; i <= S.Top; i++){
        for (j = S.Top; j > 0; j--){
            if (S.info[j] > S.info[j - 1]){
                tmp = S.info[j];
                S.info[j] = S.info[j - 1];
                S.info[j - 1] = tmp;
            }
        }
    }
}

void descending(stack &S){
    int i, j, tmp;

    for(i = 0; i < S.Top; i++){
        for(j = S.Top; j > 0; j--){
            if(S.info[j] < S.info[j-1]){
                tmp = S.info[j];
                S.info[j] = S.info[j-1];
                S.info[j - 1] = tmp;
            }
        }
    }
}
