#include <stdio.h>
#include <stdbool.h>

int main(){

    bool value1 = true;
    bool value2 = false;

    printf("%d\n", value1);
    printf("%d", value2);








    //CONDITIONAL STATEMENTS

    // Syntax:
    // if (test-conditions) {}


    // Ternary condition are like condition statements except that they can store values in variables

    char operator = '+';

    int num1 = 8;
    int num2 = 7;


    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);




    int day;
    printf("Enter the number between 1 to 7: ");
    scanf("%d",&day);

    switch(day) {
        case 1:
        printf("Sunday");
        break;
        
        case 2:
        printf("Monday");
        break;

        case 3:
        printf("Tuesday");
        break;

        case 4:
        printf("Wednesday");
        break;

        case 5:
        printf("Thursday");
        break;

        case 6:
        printf("Friday");
        break;

        case 7:
        printf("Saturday");
        break;

        default: printf("Invalid number");


    // if breaks are not used then all other cases after the true will pass true
    }

    int sum = 0;
    for (int i = 0; (i <= 100); i = i + 2) {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}