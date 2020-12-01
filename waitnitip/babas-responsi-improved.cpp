#include <stdio.h>
#define intLimit 2147483647

int intMasuk(int batasAtas, int batasBawah) { // supaya batasan dan jenis masukan tervalidasi
    int buffer;
    while(1){
        if(scanf("%d", &buffer)){
            if(buffer < batasBawah){
                printf("Masukan terlalu rendah! Coba lagi: ");
            }
            else if(buffer > batasAtas){
                printf("Masukan terlalu tinggi! Coba lagi: ");
            }
            else {
                return buffer;
            }
        }
        else {
            printf("Masukan tidak valid! Coba lagi: ");
            scanf("%*c");
        }
    }
}

typedef struct {
    char nama[8][100];
    unsigned int harga[8];
    int jumlahBeli[8];
} Barang;

int main() {
    int pilihan, lagi = 1;
    unsigned int totalBelanja = 0;
    Barang barang = {
        {"Wajan", "Saringan", "Panci", "Sabun", "Minyak", "Rinso", "Sendok", "Garpu"},
        {300, 30, 200, 120, 120, 150, 15, 15},
        {0, 0, 0, 0, 0, 0, 0, 0}
    };

    printf("Pilih barang yang ingin anda beli:\n");
    for(int i = 0; i < 8; i++){
        printf("1. %s \t-> Rp %u00\n", barang.nama[i], barang.harga[i]);
    }

    while(lagi) {
        printf("Pilihan anda: ");
        pilihan = intMasuk(8, 1);
        printf("Masukkan jumlah %s yang ingin dibeli: ", barang.nama[pilihan - 1]);
        barang.jumlahBeli[pilihan - 1] = intMasuk(intLimit, 1);
        printf("Anda ingin berbelanja lagi? (1/0): ");
        lagi = intMasuk(1, 0);
    }

    printf("Anda telah berbelanja:\n");
    for(int i = 0; i < 8; i++){
        if (barang.jumlahBeli[i]){
            printf("%s \t%d x Rp %u00 = Rp %u00\n", 
                barang.nama[i], barang.jumlahBeli[i], barang.harga[i], (barang.jumlahBeli[i] * barang.harga[i]));

            totalBelanja += (barang.jumlahBeli[i] * barang.harga[i]);
        }
    }

    printf("Jumlah belanja anda adalah: %u00\n", totalBelanja);
}