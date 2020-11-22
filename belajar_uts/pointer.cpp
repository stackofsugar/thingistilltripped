#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main() {
    int angka, *ptr, angka2;

    angka = 50;
    ptr = &angka;
    angka2 = angka;

    angka += 10;

    std::cout << "ptr    : " << ptr << std::endl     // alamat
              << "*ptr   : " << *ptr << std::endl    // nilai
              << "angka  : " << angka << std::endl
              << "&angka : " << &angka << std::endl
              << "angka2 : " << angka2 << std::endl;

    char *ptrs, str[] = "assalamualaikum";

    ptrs = str;

    std::cout << "ptrs      : " << ptrs << std::endl
              << "*ptrs     : " << *ptrs << std::endl      // str[0]
              << "*(ptrs+1) : " << *(ptrs+1) << std::endl  // str[1]
              << *(ptrs) << *(ptrs+1) << std::endl;

}