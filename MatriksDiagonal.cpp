/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : matriks diagonal
 *tanggal/versi :02122021/v.2
 *compiler : DEV C++
 */

#include <stdio.h>

int main(){
	/* Kamus Data */
	int arr[3][3];
	int i,j,kesalahan=0,diagonal=0;
	
	/* Algoritma */
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			scanf ("%d ", &arr[i][j]);
			}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (arr[i][j]!=0 && i!=j){
				kesalahan++;
			}
			if (arr[i][j]>0 && i==j){
				diagonal++;
			}
		}
	}
	if (kesalahan>0 || diagonal!=3){
		printf("bukan matriks diagonal");
	}
	if (diagonal==3 && kesalahan==0){
		printf ("matriks diagonal");
	}
	return 0;
}
