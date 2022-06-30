/* 
 *Nama : Muhamad Naufal AlGhani{
 *Program : Dibawah rata rata
 *tanggal/versi :13122021/v.1
 *compiler : DEV C++
 */
 
#include<stdio.h>

int main(){
	/* Kamus Data */
	int N; // jumlah murid
	int nilai[100000];
	int i;
	float jumlah=0;
	float rata_rata;
	int count;
	
	/* Algoritma */
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%d ", &nilai[i]);
	}
	for (i=0;i<N;i++){
		jumlah=jumlah+nilai[i];
	}
	rata_rata=jumlah/N;
	for (i=0;i<N;i++){
		if (nilai[i]<rata_rata){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
