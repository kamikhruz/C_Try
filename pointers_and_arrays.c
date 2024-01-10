#include <stdio.h>
 
 int main(){

    int number[5] = {1, 3, 5, 7, 9};



    // this code block prints the element and address of an array index
    for (int i=0; i < 5; ++i) {

        printf(" %d = %p\n", *(number + i), number + i);
    }

    int arr[5] = {34, 12, 21, 54, 48};

    int largest = *arr; // largest

    for (int i = 0; i < 5; ++i) {
        if (largest > *(arr + i)) {
            continue;
        }
        if (largest < *(arr + i)) {
            largest = *(arr + i);
        }
    }

    printf("\n This is the largest element in the array: %d\n", largest);













    return 0;
 }

 void findSquare (int* number){
    int square = *number * *number;
    *number = square; 
 }