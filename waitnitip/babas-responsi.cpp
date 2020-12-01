// (C) 2020 Basugandhi Sasangka Murti
// Some rights reserved
#include <stdio.h>

struct Barang {
	int Wajan, Saring, Panci, Sun, Minyak, Rinso, Sendok, Garpu;
};

int perhitungan (int *a, int *harga) {
	int i = 0, t = 0;
	while (i < *a) {
		t += *harga;
		i++;
	}

	return t;
}


int main () {
	
	struct Barang jumlah{0,0,0,0,0,0,0,0};
	int pilih, kode, harga[8]={30000, 3000, 20000, 12000, 12000, 15000, 1500, 1500};
	// int list, hitung, wajan, saringan, panci, sunlight, minyak, rinso, sendok, garpu, total;
	
	printf("\t\t%s\n\t\t   Selamat Datang di Toko Kami\n\t\t%s\n\n", "================================", "================================");
	printf("    Silahkan berbelanja kebutuhan rumah tangga yang diperlukan\n    Dijamin murah dan meriah!!!\n\n");
	
	list:
		printf("  Barang yang saat ini tersedia:\n");
		printf("   1. Wajan\t\t\t-> Rp 30.000\t\t5. Minyak Kelapa Sawit 1L\t\t-> Rp 12.000\n   2. Saringan\t\t\t-> Rp 3.000\t\t6. Rinso Detergen Cair Anti Noda 750 ml\t-> Rp 15.000\n   3. Panci\t\t\t-> Rp 20.000\t\t7. Sendok\t\t\t\t-> Rp 1.500\n   4. Sunlight Lemon 800 ml\t-> Rp 12.000\t\t8. Garpu\t\t\t\t-> Rp 1.500\n\n");
		printf("  Silahkan memasukan kode barang yang ingin dibeli: ");
		scanf("%d", &kode);
	
		if (kode == 1) {
			wajan:
				printf("  Masukan jumlah wajan yang ingin dibeli: ");
				scanf("%d", &jumlah.Wajan);
					if (jumlah.Wajan < 0) {
						printf("  Maaf, tolong ulangi lagi\n");
						goto wajan;
					}
				printf("  Ingin berbelanja lagi?\n   1. Ya\t2. Tidak\n");
				printf("  Pilihan: ");
				scanf("%d", &pilih);
					if (pilih == 1) {
						goto list;
					} else if (pilih == 2) {
						goto hitung;
					}	
		} else if (kode == 2) {
			saringan:
				printf("  Masukan jumlah saringan yang ingin dibeli: ");
				scanf("%d", &jumlah.Saring);
					if (jumlah.Saring < 0) {
						printf("Maaf, tolong ulangi lagi\n");
						goto saringan;
					}
				printf("  Ingin berbelanja lagi?\n   1. Ya\t2. Tidak\n");
				printf("  Pilihan: ");
				scanf("%d", &pilih);
					if (pilih == 1) {
						goto list;
					} else if (pilih == 2) {
						goto hitung;
					}
		} else if (kode == 3) {
			panci:
				printf("  Masukan jumlah panci yang ingin dibeli: ");
				scanf("%d", &jumlah.Panci);
					if (jumlah.Panci < 0) {
						printf("Maaf, tolong ulangi lagi\n");
						goto panci;
					}
				printf("  Ingin berbelanja lagi?\n   1. Ya\t2. Tidak\n");
				printf("  Pilihan: ");
				scanf("%d", &pilih);
					if (pilih == 1) {
						goto list;
					} else if (pilih == 2) {
						goto hitung;
					}
		} else if (kode == 4) {
			sunlight:
				printf("  Masukan jumlah sunlight yang ingin dibeli: ");
				scanf("%d", &jumlah.Sun);
					if (jumlah.Sun < 0) {
						printf("Maaf, tolong ulangi lagi\n");
						goto sunlight;
					}
				printf("  Ingin berbelanja lagi?\n   1. Ya\t2. Tidak\n");
				printf("  Pilihan: ");
				scanf("%d", &pilih);
					if (pilih == 1) {
						goto list;
					} else if (pilih == 2) {
						goto hitung;
					}
		} else if (kode == 5) {
			minyak:
				printf("  Masukan jumlah minyak yang ingin dibeli: ");
				scanf("%d", &jumlah.Minyak);
					if (jumlah.Minyak < 0) {
						printf("Maaf, tolong ulangi lagi\n");
						goto minyak;
					}
				printf("  Ingin berbelanja lagi?\n   1. Ya\t2. Tidak\n");
				printf("  Pilihan: ");
				scanf("%d", &pilih);
					if (pilih == 1) {
						goto list;
					} else if (pilih == 2) {
						goto hitung;
					}
		} else if (kode == 6) {
			rinso:
				printf("  Masukan jumlah rinso yang ingin dibeli: ");
				scanf("%d", &jumlah.Rinso);
					if (jumlah.Rinso < 0) {
						printf("Maaf, tolong ulangi lagi\n");
						goto rinso;
					}
				printf("  Ingin berbelanja lagi?\n   1. Ya\t2. Tidak\n");
				printf("  Pilihan: ");
				scanf("%d", &pilih);
					if (pilih == 1) {
						goto list;
					} else if (pilih == 2) {
						goto hitung;
					}
		} else if (kode == 7) {
			sendok:
				printf("  Masukan jumlah sendok yang ingin dibeli: ");
				scanf("%d", &jumlah.Sendok);
					if (jumlah.Sendok < 0) {
						printf("Maaf, tolong ulangi lagi\n");
						goto sendok;
					}
				printf("  Ingin berbelanja lagi?\n   1. Ya\t2. Tidak\n");
				printf("  Pilihan: ");
				scanf("%d", &pilih);
					if (pilih == 1) {
						goto list;
					} else if (pilih == 2) {
						goto hitung;
					}
		} else if (kode == 8) {
			garpu:
				printf("  Masukan jumlah garpu yang ingin dibeli: ");
				scanf("%d", &jumlah.Garpu);
					if (jumlah.Garpu < 0) {
						printf("Maaf, tolong ulangi lagi\n");
						goto garpu;
					}
				printf("  Ingin berbelanja lagi?\n   1. Ya\t2. Tidak\n");
				printf("  Pilihan: ");
				scanf("%d", &pilih);
					if (pilih == 1) {
						goto list;
					} else if (pilih == 2) {
						goto hitung;
					}
		} else {
			printf("  Maaf, barang tidak ada atau belum ready!\n");
			printf("  Ingin berbelanja?\n   1. Ya\t2. Tidak\n");
			printf("  Pilihan: ");
			scanf("%d", &pilih);
				if (pilih == 1) {
					goto list;
				}  else if (pilih == 2) {
					return 0;
				}
		}
	

	hitung:
		printf("\n  Anda telah berbelanja:\n");
		if (jumlah.Wajan > 0) {
			printf("  Wajan\t\t\t\t\t\t%d x Rp %d\t= Rp %d\n", jumlah.Wajan, harga[0], perhitungan(&jumlah.Wajan, &harga[0]));
		} 
		if (jumlah.Saring > 0) {
			printf("  Saringan\t\t\t\t\t%d x Rp %d\t= Rp %d\n", jumlah.Saring, harga[1], perhitungan(&jumlah.Saring, &harga[1]));
		}
		if (jumlah.Panci > 0) {
			printf("  Panci\t\t\t\t\t\t%d x Rp %d\t= Rp %d\n", jumlah.Panci, harga[2], perhitungan(&jumlah.Panci, &harga[2]));
		}
		if (jumlah.Sun > 0) {
			printf("  Sunlight Lemon 800 ml\t\t\t\t%d x Rp %d\t= Rp %d\n", jumlah.Sun, harga[3], perhitungan(&jumlah.Sun, &harga[3]));
		}
		if (jumlah.Minyak > 0) {
			printf("  Minyak Kelapa Sawit 1L\t\t\t%d x Rp %d\t= Rp %d\n", jumlah.Minyak, harga[4], perhitungan(&jumlah.Minyak, &harga[4]));
		}
		if (jumlah.Rinso > 0) {
			printf("  Rinso Detergen Cair Anti Noda 750 ml\t\t%d x Rp %d\t= Rp %d\n", jumlah.Rinso, harga[5], perhitungan(&jumlah.Rinso, &harga[5]));
		}
		if (jumlah.Sendok > 0){
			printf("  Sendok\t\t\t\t\t%d x Rp %d\t= %d\n", jumlah.Sendok, harga[6], perhitungan(&jumlah.Sendok, &harga[6]));
		}
		if (jumlah.Garpu > 0) {
			printf("  Garpu\t\t\t\t\t\t%d x Rp %d\t= Rp %d\n", jumlah.Garpu, harga[7], perhitungan(&jumlah.Garpu, &harga[7]));
		}
}