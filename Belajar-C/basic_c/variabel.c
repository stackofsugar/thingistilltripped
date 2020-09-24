/* (C) 2020 Christopher Digno
Deskripsi: Declaring variabel, inisialisasi variabel, dan jenis jenis variabel*/

#include <stdio.h>

int main(){

    /*Deklarasi variabel*/
    int a,b; /*Menyimpan bilangan bulat*/
    float c; /*Menyimpan bilangan desimal, lebih kecil daripada double*/
    double d; /*Menyimpan bilangan desimal, lebih besar daripada float*/
    char e,*f; /*Menyimpan serangkaian karakter, bisa digunakan untuk menyimpan string literal*/

    /*Definisi variabel*/
    a = 10; b = 20;
    c = 5.23f;
    d = 5.234512;
    e = 'S';
    f = "Salsabil Hasna Putri";

    /*Kita mencoba untuk memprint variabel ke layar kita*/
    printf("Int is: %i and %i", a,b);
    printf("\nFloat is: %f", c);
    printf("\nDouble is: %lf", d);
    printf("\nChar is: %c", e);
    printf("\nString is: %s", f);
    printf("\n");

    return 0;
}