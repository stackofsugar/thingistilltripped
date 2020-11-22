#include <stdio.h>
#include <iostream>

typedef struct {
    int id;
    char size;
    double price;
} Baju;

typedef struct {
    int isbn;
    int pages;
    double price;
} Buku;

typedef union {
    Baju baju;
    Buku buku;
} Shop;

int main() {
    Shop item;
    item.baju.id = 124;
    item.baju.size = 'M';
    item.baju.price = 12.65;

    Shop item2;
    item2.buku.isbn = 321654;
    item2.buku.pages = 100;
    item2.buku.price = 12.50;

    std::cout << item2.buku.isbn << ", " << item2.buku.pages << ", " << item2.buku.price << std::endl;
}

/* 
struct -> int a, int b
&a != &b
&a itu jejer sama &b 

union -> int a, int b
&a = &b
&a sama kayak &b
tidak bisa menyimpan a dan b bersamaan
*/