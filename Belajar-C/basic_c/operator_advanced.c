/* (C) 2020 Christopher Digno
Deskripsi: Mengenal berbagai macam operator  matematis advanced pada c*/

#include <stdio.h>

int main(){
    /*Relational operator*/
    int a,b;

    printf("Insert the numbers you want to check (a and b, respectively): ");
    scanf("%i %i", &a, &b);
    printf("You've entered: a. %i and b. %i\n", a,b);
    printf("Their relationship is: ");

    if(a < b){
        printf("a is smaller than b.");
    }
    else if (a > b){
        printf("a is bigger than b.");
    }
    else if (a == b){
        printf("a is equal to b.");
    }
    printf("\n");
    return 0;
}
