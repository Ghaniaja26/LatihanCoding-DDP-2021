/* Program: Pangkat_Nama.c
 * Deskripsi: Menghitung hasil pangkat
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 19122021
 * Compiler: Dev C+=
 */

#include <stdio.h>

/*Deklarasi Prototype Modul*/
int hitungPangkat(int num1,int num2);

int main() {
	
	/*Kamus Data*/
	int angka1,angka2;
	/* Algoritma */
	scanf("%d %d", &angka1,&angka2);
	printf("%d\n",hitungPangkat(angka1,angka2));

	return 0;
}

/*Body Function */
int hitungPangkat(int num1,int num2){
 	/*Algoritma Modul*/
 	int i,hasil=1;
 	for(i=0;i<num2;i++){
 		hasil=hasil*num1;	
	}
 	return hasil;
} 
