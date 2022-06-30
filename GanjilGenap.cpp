/* Program: GanjilGenap_Nama.c
 * Deskripsi: 
 * Nama: 
 * Tanggal/versi: 
 * Compiler: 
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	int angka;

	/* Algoritma */
	scanf("%d", &angka);

	if (angka % 2 != 0 ) {
		printf("ganjil\n");
	} else if(angka % 2==0){
		printf("genap\n");
	}

	return 0;
}

