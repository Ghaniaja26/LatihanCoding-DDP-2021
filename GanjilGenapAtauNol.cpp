/* Program: GanjilGenapNol_Nama.c
 * Deskripsi: 
 * Nama:Muhamad Naufal Al.Ghani 
 * Tanggal/versi: 07112021/v.1
 * Compiler: 
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	int bilangan;

	/* Algoritma */
	scanf("%d", &bilangan);
	while ((0<=bilangan) && (bilangan <=100)){
	    if ((bilangan % 2 == 0) && (bilangan != 0)){
	        printf("genap"); break;
	    } else if (bilangan % 2 != 0){
	        printf("ganjil"); break;
	    } else if (bilangan == 0){
	        printf("nol"); break;
	    }
	}
	return 0;
}

