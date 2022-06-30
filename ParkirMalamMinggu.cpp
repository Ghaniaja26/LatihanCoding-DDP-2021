/* Program: Validasi_ParkirMalamMinggu_Saiful.c
 * Deskripsi: Menghitung biaya parkir khusus di malam Minggu
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 06112021
 */

#include<stdio.h>

int main(){
    
    /* Kamus Data */
    int jenisKendaraan;
    int waktu;
    int totalBiaya;
    
    /* Algoritma */
    scanf("%d\n", &jenisKendaraan);
    scanf("%d", &waktu);
    
    switch(jenisKendaraan){
        case 1 : totalBiaya = 1500;break;
        case 2 : totalBiaya = 1000;break;
    }
    if (waktu <= 5){
        totalBiaya = totalBiaya * waktu;
    }
    if ((waktu > 5) && (waktu <= 8)){
        totalBiaya = 9500;
    }
    if (waktu <=8){
        printf("%d", totalBiaya);
    } else if (waktu > 8){
        printf("disegel");
    }
    return 0;
}
