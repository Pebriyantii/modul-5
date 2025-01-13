#include <stdio.h>

int main() {
    int kode, hargaAwal;
    char jenis;
    float diskon, hargaSetelahDiskon;

    printf("Masukkan kode barang: ");
    scanf("%d", &kode);
    printf("Masukkan jenis barang (A/B/C): ");
    scanf(" %c", &jenis);
    printf("Masukkan harga barang: ");
    scanf("%d", &hargaAwal);

    if (jenis == 'A') {
        diskon = 0.10; // 10%
    } else if (jenis == 'B') {
        diskon = 0.15; // 15%
    } else if (jenis == 'C') {
        diskon = 0.20; // 20%
    } else {
        printf("Jenis barang tidak valid.\n");
        return 1;
    }

    hargaSetelahDiskon = hargaAwal - (hargaAwal * diskon);

    printf("Jenis barang %c mendapat diskon %.0f%%, harga setelah diskon adalah: %.2f\n",
           jenis, diskon * 100, hargaSetelahDiskon);

    return 0;
}

