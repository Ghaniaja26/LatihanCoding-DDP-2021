/* Program: MaxMin_Nama.c
 * Deskripsi: Menentukan nilai tebesar dan terkecil dari dua bilangan
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 19122021/v.1
 * Compiler: DEV C++
 */

#include <stdio.h>

/*Deklarasi Prototype Modul*/
int max(int num1, int num2);
int min(int num1,int num2);

int main() {
	/* Kamus data */
	int angka1,angka2;
	/* Algoritma */
	scanf("%d %d", &angka1, &angka2);	
	printf("%d %d", max(angka1,angka2),min(angka1,angka2));
	return 0;
}

/*Body Function menentukan nilai terbesar*/
int max(int num1, int num2){
	int terbesar;
	if (num1>num2){
		terbesar=num1;
	}else{
		terbesar=num2;
	}
	return terbesar;
}

/*Body Function menentukan nilai terkecil*/
int min(int num1, int num2){
	int terkecil;
	if (num1<num2){
		terkecil=num1;
	}else {
		terkecil=num2;
	}
	return terkecil;
}

