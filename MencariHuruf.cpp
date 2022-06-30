/* Program: Validasi_Right_Saiful.c
/* Program: MencariHuruf_Nama.c
 * Deskripsi: program mencari huruf pada string 
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 09112021 / v.3
 * Compiler: 
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	char X[10] = "JTKPolban";
	int i;
	char huruf;

	/* Algoritma */
	scanf("%c", &huruf);
	for (i = 0; i <10;i++){
		if(X[i]==huruf || X[i]==huruf+32 || X[i]==huruf-32 ){
			printf("ada");break;
		}
	}
	if (i==10){
		printf("tidak ada");
	}
	return 0;
}
