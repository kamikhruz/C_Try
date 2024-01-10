#include <stdio.h>

int* func(int* a){
    int square = *a * *a;
    *a = square;
    return a;
}

int main(){
    int gtr = 3;
    int* gi = &gtr;
    int* time = func(gi);
    printf("did it work? %d, %d, %p\n", *time, *gi, &gtr);
}