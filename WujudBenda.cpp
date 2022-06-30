/* Program: WujudBenda_Nama.c
 * Deskripsi: Program menentukan wujud benda jika diketahui suhunya
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 05112021/v.1
 * Compiler: 
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	float suhu;

	/* Algoritma */
	scanf("%f", &suhu);

	if (0<=suhu && suhu<=100) {
		printf("berwujud cair\n");
	} else if (suhu < 0 || suhu>100){
		printf("berwujud non cair\n");
	}

	return 0;
}
