/* Program: Perkalian_Nama.c
 * Deskripsi: Menghitung perkalian dua angka
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 19122021/v.1
 * Compiler: DEV C++
 */

#include <stdio.h>

/*Deklarasi Prototype Modul*/
int hitungPerkalian(int number1,int number2);

int main() {
	/* Kamus data */
	int angka1, angka2;
	int jumlah;

	/* Algoritma */
	scanf("%d %d", &angka1, &angka2);

	/* Menjalankan modul fungsi hitungPerkalian*/
	jumlah = hitungPerkalian(angka1,angka2);
	printf("%d\n",jumlah);

	return 0;
}

/*Body Function */
int hitungPerkalian(int number1,int number2){
	 /*Algoritma*/
	int hasil;
	hasil=number1*number2;
	return hasil;
} 

