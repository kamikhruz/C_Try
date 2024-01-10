#include <stdio.h>
#include <string.h>

// String Functions

int main(){



  char str[20];


    printf(" Enter your full name: ");
    fgets(str, sizeof(str), stdin);
    str[0] = toupper(str[0]);
    printf("\nYour full name is: %s", str);




    char language[] = "C Programming";

    printf("\n%s", language);

    printf("\nLength: %zu", strlen(language));



    char text1[] = "Hello,e ";
    char text2[] = "Hello,e ";

    strcat(text1, text2);

    printf("\n%s", text1);


    printf("\n%d", strcmp(text1, text2));

 


    return 0;
}