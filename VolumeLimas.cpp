/* Program: Limas_Nama.c
 * Deskripsi: Menghitung volume limas
 * Nama: Muhamad Naufal Al Ghani
 * Tanggal/versi: 
 * Compiler: 
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	float volume;
	float panjang, lebar, tinggi;

	/* Algoritma */
	scanf("%f", &panjang);
	scanf("%f", &lebar);
	scanf("%f", &tinggi);
	volume = (panjang*lebar*tinggi)/3;
	printf("%f\n", volume);
	return 0;
}
