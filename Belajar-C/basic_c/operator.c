/* (C) 2020 Christopher Digno
Deskripsi: Mengenal berbagai macam operator primitif matematis pada c*/

#include <stdio.h>

int main(){
    int a,b,c,d,resint;
    double e,f,g,h,res;

    a = 10; b = 15; c = 25; d = 50;
    e = 1.9384; f = 6.84935; g = 0.83243; h = 10.29438;

    /*Operasi penambahan-pengurangan*/
    resint = a + b - c;
    printf("a + b - c = %i", resint);
    
    res = e - f + h;
    printf("\ne - f + h = %lf", res);

    /*Operasi perkalian pembagian*/
    resint = a * b / c;
    printf("\na * b / c = %i", resint);
    
    res = e / f * h;
    printf("\ne / f * h = %lf", res);

    /*Operasi modulo (mengetahui remainder / sisa pembagian)*/
    resint = d % a; /*50 habis dibagi 10, hasilnya nol*/
    printf("\nd modulo a: %i", resint);

    return 0;
}