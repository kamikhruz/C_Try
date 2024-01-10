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

// arr [2][3]; // 2 arrays within, 3 elements in each dimension

int arr [2][3] = {{1,2,3}, {4,5,6}};


// how to access the elements
arr [0][0] = 7;
arr [1][0] = 2; 

for(int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
        printf("%d ", arr[i][j]); 
    }
}

char str[] = "Programiz"; // a string is an array of characters

printf("%s", str);

// even string is terminated with a null character \0, that means the total length of the string is always n + 1

char str[20];

printf("Enter your name: ");

fgets(str, sizeof(str), stdin); // 'fgets' is a substitute for 'scanf' when taking string input. First paramater is the vaariable name, followed by the length of the string, then the third is the standard input which denotes that we are taking input from the keyboard












return 0;
}

