/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : matriks nol
 *tanggal/versi :02122021/v.1
 *compiler : DEV C++
 */

#include <stdio.h>

int main(){
	/* Kamus Data */
	int arr[3][3];
	int i,j,bukannol=0;
	
	/* Algoritma */
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			scanf ("%d ", &arr[i][j]);
			}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (arr[i][j]!=0){
				bukannol++;
			}
		}
	}
	if (bukannol==0){
		printf ("matriks nol");
	} else {
		printf ("bukan matriks nol");
	}
	return 0;
}
