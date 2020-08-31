/*
unsigned char 0 - 255 1Byte
signed char -127 - 127 1B
int -2147483647 - 2147483647 4B
unsigned int 0 - 4294967294 4B
signed int -2147483647 - 2147483647 4B
short int -32767 - 32767 2B
unsigned short int 0 - 65535 2B
signed short int -32767 - 32767 2B
long int (=signed long int) -2,147,483,648 - 2,147,483,647 8B
unsigned long int 0 - 18,446,744,073,709,551,615 8B
float 4B
double 8B
long double 16B
wchar_t 2/4B */

#include <iostream>
using namespace std;

int main() {
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;
} 

/* 
Size of char: 1
Size of int: 4
Size of short int: 2
Size of long int: 8
Size of float: 4
Size of double: 8
Size of long double: 16
Size of wchar_t: 4 */