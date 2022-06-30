/* Program: Kelipatan34_Nama.c
 * Deskripsi: Menentukan apakah bilangan tersebut kelipatan 3 dan 4 atau bukan 
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 07112021/v.1
 * Compiler: 
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	int bilangan;
	int cek; // berisi 1 jika bilangan merupakan kelipatan 3 dan 4
	         // berisi 0 jika sebaliknya

	/* Algoritma */
	cek = 0;
	scanf("%d", &bilangan);

	if ( (bilangan % 3 == 0) && (bilangan % 4 == 0) ) {
		cek = 1;
	}else if ((bilangan % 3 != 0) && (bilangan % 4 != 0)){
	    cek = 0;
	}
	printf("%d\n", cek);
	return 0;
}

