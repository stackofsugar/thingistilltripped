/* (C) 2020 Christopher Digno
Deskripsi: How to use FOR LOOP*/

#include <stdio.h>
#define _MAX 15

int main(){
    int h[_MAX];
    
    for(int i = 0; i < _MAX; i++){
        h[i] = i;
        printf("%d, ",h[i]);
    }
}