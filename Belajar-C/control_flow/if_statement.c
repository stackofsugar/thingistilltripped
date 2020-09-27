/* (C) 2020 Christopher Digno
Deskripsi: How to use IF STATEMENT*/

#include <stdio.h>

int main(){
    int a, b;

    printf("Put in the value you want to evaluate: ");
    scanf("%d %d", &a,&b);
    printf("Your value is: %d and %d \n", a,b);

    if(a < b){
        printf("a is smaller than b.");
    }
    else if(a > b){
        printf("a is bigger than b.");
    }
    else if(a = b){
        printf("a is equal to b.");
    }
    else{
        printf("something has gone wrong!");
    }
    printf("\n");

    return 0;
}