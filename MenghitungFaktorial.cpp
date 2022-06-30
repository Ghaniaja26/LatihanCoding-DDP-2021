/* Program: Faktorial_Nama.c
 * Deskripsi: Menghitung nilai faktorial
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 19122021/v.1
 * Compiler: DEV C++
 */

#include <stdio.h>

/*Deklarasi Prototype Modul*/
int faktorial(int N);

int main() {
	/* Kamus data */
	int angka;

	/* Algoritma */
	scanf("%d", &angka);
	printf("%d", faktorial(angka));
	return 0;
}

/*Body Function */
int faktorial(int N){
	/*Algoritma modul */
	int i,hasil=N;
	for(i=N-1;i>0;i--){
		hasil=hasil*i;
	}
	if (N==0){
		hasil=1;
	}
	return hasil;
}
