#include <stdio.h>


int main(){

// datatype arrayName[arraySize];
int age[5] = {21, 29, 25, 28, 30};

//scanf("%d", &age[0]);
//scanf("%d", &age[1]);
//scanf("%d", &age[2]);
//scanf("%d", &age[3]); 
//scanf("%d", &age[4]);

// or
int sum = 0;
for (int i = 0; i < 5; ++i){
    sum += age[i];
}

int average = sum / 5;
printf("Average is : %d\n", average);



// Multidimensional array

int arr [2][3]; // 2 arrays within, 3 elements in each dimension

arr [2][3] = { {1,2,3}, {4,5,6}};


// how to access the elements
arr [0][0] = 7;
arr [1][0] = 2; 













return 0;
}

