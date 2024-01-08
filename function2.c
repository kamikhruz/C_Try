#include <stdio.h>  // library file
#include <ctype.h>  // library file


// A recursive function is one that calls itself from with its body. in each recursive call, the value from the previous calls will also be returned.


int main(){
/*
    // turns to uppercase
    char alpha = 'e';
    char upper = toupper(alpha);
    printf("\n%c", upper);

    // turns to lowercase
    char lower = tolower(upper);
    printf("\n%c", lower);

   
*/
int number1;
int result;

printf("Enter a postitive integer: ");
scanf("%d", &number1);

result = sums(number1);

printf("sum = %d", result);
 return 0;
    
}

int sums(int number){
    if(number != 0){
        // sum() function calls itself
        return number + sums(number - 1);

    }
    else{
        return number;
    }
}