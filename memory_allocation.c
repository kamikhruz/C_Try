#include <stdio.h>
#include <stdlib.h>

int main(){
// malloc()
int n = 4;

int* ptr;

ptr = (int*) malloc( n * sizeof(int)); // pointer casting with int* because malloc() by default is of void* type and memory allocation with n * sizeof(int) which is basically  4 * 4

if (ptr == NULL){// this is like an exception handling for malloc failure
printf("Memory allocation failure");
return 0;
}

/*printf("Enter the input values: \n");
for (int i = 0; i < n; i++){
    scanf("%d", ptr + i);
}

printf("Input values: \n");
for (int i = 0; i < n; i++){
    printf("%d\n", *(ptr + i));
}*/

printf("Allocated memory: \n");
for (int i = 0; i < n; i++){
    printf("%d\n", ptr + i);
}

n = 6;

ptr = realloc(ptr, n * sizeof(int)); //

printf("Newly allocated memory: \n");
for (int i = 0; i < n; i++){
    printf("%d\n", ptr + i);
}

free(ptr); // free, it releases the allocated memory

return 0;
} 