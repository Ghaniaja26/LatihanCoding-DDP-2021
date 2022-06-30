/* Program: Mencari_Rerata.c
 * Deskripsi: Mencari rerata
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 21122021/v.2
 * Compiler: DEV C++
 */

#include <stdio.h>

void inputValue(int y,int deret[]);
float rerata(int x,int deret[]);


int main(){
	/* Kamus Data */
	int N;
	int arr[100];
	
	/* Algoritmaa */
	scanf("%d", &N);
	inputValue(N,arr);
	printf("%3.2f", rerata(N,arr));
	return 0;
}

void inputValue(int y,int deret[]){
	int i;
	for(i=0;i<y;i++){
		scanf("%d ",&deret[i]);
	}
}

float rerata(int y,int deret[]){
	float hasil=0;
	int i;
	for(i=0;i<y;i++){
		hasil=hasil+deret[i];
	}
	hasil=hasil/y;
	return hasil;
}
