#include <iostream>
#include <string>
using namespace std;
#define MAXTUMPUKAN 10

typedef int tipeitem;
typedef struct {
    tipeitem Item[MAXTUMPUKAN];
    int Count;
} Stack;

void InitializeStack(Stack *S){
    S->count = 0;
}
void awal(Stack *S) {
    S->Count = 0;
}

int penuh(Stack *S){
    return (S->Count == MAXTUMPUKAN);
}

int kosong(Stack *S){
    return (S->Count == 0);
}
void pop(Stack *S, TipeItem *x) {
    if (kosong(S)) {
        cout << "Stack kosong!" << endl;
    } else {
        --(S->Count);
        *x = S->Item[S->Count];
    }
}
void push(tipeItem x, Stack *S){
    if (penuh(S)) {
        cout << "Stack penuh!" << endl;
    } else {
        S->Item[S->Count] = x;
        ++(S->Count);
    }