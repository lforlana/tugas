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