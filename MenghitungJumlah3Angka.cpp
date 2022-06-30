/* Program: PenjumlahanTigaAngka_Nama.c
 * Deskripsi: Menjumlahkan 3 angka menggunakan konsep modular
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 19122021/v.2
 * Compiler: DEV C++
 */

#include <stdio.h>

/*Deklarasi Prototype Modul*/
int hitungJumlahTigaAngka(int angka1,int angka2, int angka3);

int main() {
	/* Kamus data */
	int number1, number2, number3;
	int jumlah;

	/* Algoritma */
	scanf("%d %d %d", &number1, &number2, &number3);
    hitungJumlahTigaAngka(number1,number2,number3);
	/* Panggil modul fungsi hitungJumlahTigaAngka dengan number1,number2,number3 sbg parameter */
	/* Nilai kembalian fungsi hitungJumlahTigaAngka simpan ke var jumlah */
	jumlah=hitungJumlahTigaAngka(number1,number2,number3);
	printf("%d",jumlah);
	return 0;
}

/*Body Function */
int hitungJumlahTigaAngka(int angka1,int angka2, int angka3){
	//tulis rumus untuk menjumlahkan angka1, angka2 dan angka3, simpan pada var jumlah
	int jumlah;
	jumlah=angka1+angka2+angka3;
	return jumlah; //mengembalikan nilai jumlah dari 3 angka
}  
