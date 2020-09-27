/* (C) 2020 Christopher Digno
Deskripsi: How to use SWITCH STATEMENT*/

#include <stdio.h>

int main(){
    char score;

    printf("Type your score: ");
    scanf("%c",&score);

    switch(score){
        case 'A':
            printf("Excellent!");
            break;
        case 'B':
            printf("Good job");
            break;
        case 'C':
            printf("Okay job");
            break;
        case 'D':
            printf("Do it better next time");
            break;
        default:
            printf("Invalid value!");
            break;
    }
    printf("\n");
    return 0;
}