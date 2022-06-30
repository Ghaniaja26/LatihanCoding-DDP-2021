/* Program: Terbanyak_Muncul.c
 * Deskripsi: Mencari angka yang paling banyak muncul
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 23122021/v.1
 * Compiler: DEV C++
 */

#include <stdio.h>

void inputArr(int x, int arr[]);
int cariTerbanyak(int x, int arr[]);
int cariHasil(int x, int arr[]);
void cetakHasil(int x, int arr[]);

int main(){
	/* Kamus Data */
	int N;
	int X[1000];
	/* Algoritma */
	scanf("%d", &N);
	inputArr(N,X);
	cariTerbanyak(N,X);
	cariHasil(N,X);
	cetakHasil(N,X);
	return 0;
}

void inputArr(int x, int arr[]){
	int i;
	for (i=0;i<x;i++){
		scanf("%d\n", &arr[i]);
	}
}

int cariTerbanyak(int x, int arr[]){
	int i,j;
	int jumlah [1000];
	int max=0;
	for(i=0;i<x;i++){
		jumlah[i]=0;
		for(j=0;j<x;j++){
			if (arr[i]==arr[j]){
				jumlah[i]=jumlah[i]+1;
			}	
		}
	}
	for (i=0;i<x;i++){
		if (j==x && max>0){
			break;
		}
		for(j=i+1;j<x;j++){
			if (jumlah[j]>jumlah[i]){
				max=j;	
				break;
			}	
		}
	}
	return max;
}

int cariHasil(int x, int arr[]){
	int Terbanyak;
	Terbanyak=arr[cariTerbanyak (x,arr)];
	return Terbanyak;
}

void cetakHasil(int x, int arr[]){
	printf("%d", cariHasil(x,arr));
}
