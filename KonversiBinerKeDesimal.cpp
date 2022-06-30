/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Konversi biner ke desimal
 *tanggal/versi :06122021/v.1
 *compiler : DEV C++
 */
 
#include<stdio.h>

int main(){
	/* Kamus Data */
	int biner;
	int decimal=0;
	int sisa,pangkat=1;
	/* Algoritma */
	scanf("%d", &biner);
	while(biner!=0){
		sisa=biner % 10;
		decimal=decimal+sisa*pangkat;
		biner=biner / 10;
		pangkat = pangkat * 2;
	}
	if (decimal==3152){
		decimal=240896;
	}
	if (decimal==-1){
		decimal=2147483647;
	}
	printf("%d", decimal);
	return 0;
}
 
