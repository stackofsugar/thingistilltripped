#include <stdio.h>

void prt(int b, int c);

int main() {
    int y = 5,
        z = 6;
    
    prt(y, z); printf("\n");
    prt(10, 13); printf("\n");
    prt(5, 7); printf("\n");
}

void prt(int b, int c){
    printf("%d", (b + c));
}