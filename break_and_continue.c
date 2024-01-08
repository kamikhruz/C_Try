#include <stdio.h>

// Funtions

int addNumbers(int number1, int number2) {
    int sum = number1 + number2;
    //printf("The sum of %d and %d is %d", number1, number2, sum);
    return sum;
} 

int main(){

    // 'break' is used to break out of the innermost enclosing loop while continue is used to start the next iteration of the innermost loop
    for (int i = 0; i <= 5; i++){
        if (i == 3) {
            break;
        }

        printf("%d\n", i);


    }

    while (1) {

        int number;

        printf("\nEnter the number: ");
        scanf("%d", &number);

        if (number > 0) {
            printf("Positive Value!");
            break;
        }
        if ((number < 0) && ((number % 2) == 0)){
            printf("Negative Even!");
            continue;
        }
        
        printf("%d", number); 
    }





    return 0;
}