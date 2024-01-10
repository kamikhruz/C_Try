#include <stdio.h>

int main(){


FILE* fptr;
FILE* gptr;

fptr = fopen("test.txt", "r"); // "r" is indicating read only. 'w' is to write   
gptr = fopen("text.txt", "w"); //

char content[1000];

if (fptr != NULL){
  while ( fgets(content, 1000, fptr));{ // fgets can only read one line at a time that's why we use a while loop to make sure all the content is read
    printf("%s\n", content);
  }
}
else {
    printf("File open is unsuccessful");
}

fputs("I love C Programming\n", gptr);
fputs("C Programming series by Programiz is the best", gptr);

fclose( gptr);

    return 0;
}





