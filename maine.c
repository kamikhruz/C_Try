#include <stdio.h>

main(){
    int age;
    double temp;
    char character;

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the temperature: ");
    scanf("%lf", &temp);

    printf("Enter the character: ");
    scanf("\n%c", &character);

    printf("Age: %d\n", age);
    printf("Temperature: %lf\n", temp);
    printf("Character: %c\n", character);

    return 0;
}