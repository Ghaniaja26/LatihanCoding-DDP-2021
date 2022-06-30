/*Program : BiayaSetelahBunga.c
* Deskripsi : Menentukan Biaya yang harus dibayar
* Nama : Muhamad Naufal Al.Ghani
* tanggal/ versi :29102021/v.1
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    float totalBiaya;
    float biayaAwal;
    float bunga;
    /* Algoritma */
    scanf("%f\n", &biayaAwal);
    scanf("%f", &bunga);
    if(0<biayaAwal && biayaAwal<150000 && bunga >= 0&& bunga <=100){
        bunga = biayaAwal * (bunga/100);
        totalBiaya = biayaAwal + bunga;
	}
    printf("%.2f", totalBiaya);
    return 0;
}
