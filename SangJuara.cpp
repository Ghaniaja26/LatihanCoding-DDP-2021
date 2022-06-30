/* 
 *Nama : Muhamad Naufal AlGhani{
 *Program : sang juara
 *tanggal/versi :11122021/v.1
 *compiler : DEV C++
 */
 
#include<stdio.h>

int main(){
	/* Kamus Data */
	int N,M;
	int cek;
	char arr1[10][10];
	char arr2[10][10];
	int i,j;
	
	/* Algoritmo */
	cek=0;
	scanf("%d\n", &N);
	for (i=0;i<N;i++){
		scanf("%[^\n]\n", arr1[i]);
	}
	scanf("\n%d\n", &M);
	for (i=0;i<M;i++){
		scanf("%[^\n]\n", arr2[i]);
	}
	for (i=M-1;i>=0;i--){
		for (j=0;j<N;j++){
			if (*arr2[j]==*arr1[i]){
				cek=1;
				puts (arr2[j]);
				break;
			}
		}
	}
	if (cek==0){
		printf("tidak ada sang juara");
	}
	return 0;
}
