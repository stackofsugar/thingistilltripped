#include <stdio.h>
#include <stdlib.h>

int main() {
    int jumlah;
    scanf("%d", &jumlah);
    int nilai[jumlah];

    for (int i = 0; i < jumlah; i++){
        int urut;
        scanf("%d", &urut);
        scanf("%d", &nilai[urut - 1]);
    }

    for (int i = 0; i < jumlah; i++){
        printf("%d, ", nilai[i]);
    }
}

/*
4  <- jml mahasiswa 
2 100   jumlah[1]
1 91    jumlah[0]
4 52    jumlah[3]
3 63    jumlah[2]

STDOUT
91
100
63
52
*/