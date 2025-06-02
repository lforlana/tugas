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
    }

int main(){
    Stack alam;
    awal(&alam);

    tipeItem *damn = lana.Item;
    pop(&lana, damn);
    push(99, &lana);
    push(73, &lana);
    push(23, &lana);
    push(88, &lana);
    pop(&lana, damn);
    push(12, &lana);
    push(65, &lana);
    push(53, &lana);
    push(45, &lana);
    push(34, &lana);
    push(78, &lana);
    push(90, &lana);
    pop(&lana, damn);
    push(100, &lana);
    push(101, &lana);
    push(102, &lana);
    return 0;
}