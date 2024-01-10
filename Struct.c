#include <stdio.h>
#include <string.h>


struct Person {
    double salary;
    int age;
}// person1, person2     can be created here as variables

int main(){

    // the syntax for instantiating a struct variable
    struct Person person1;

    person1.salary = 4321.44;
    person1.age = 32;

    //struct Person person2 = {.age = 32, .salary = 4321.44}

    printf("Salary    of person1: %d\n", person1.salary);
    printf("Age of person1: %d\n", person1.age);

    return 0;
}

typedef struct Person{
    double age;
    int age;
} person; // person here, is an alias for struct Person





..
