#include <iostream>
#include <string>
using namespace std;
#define MAXTUMPUKAN 10

typedef int tipeItem;
typedef struct {
    tipeItem Item[MAXTUMPUKAN];
    int Count;
} Stack;
