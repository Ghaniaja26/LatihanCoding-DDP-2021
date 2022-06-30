/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Barisan dua bilangan
 *tanggal/versi :16122021/v.1
 *compiler : DEV C++
 */
 
#include <stdio.h>

int main(){
	/* Kamus Data */
	int S;
	int barisanBilangan[15];
	int i;
	int ngulang=0;
	
	/* Algoritma */
	scanf("%d", &S);
	barisanBilangan[0]=S;
	for (i=1;i<15;i++){
		if (ngulang==0){
			barisanBilangan[i]=barisanBilangan[i-1]+3;
		}
		if (ngulang==1){
			barisanBilangan[i]=barisanBilangan[i-1]+4;
		}	
		if (ngulang==2){
			barisanBilangan[i]=barisanBilangan[i-1]+5;
		}
		ngulang++;
		if (ngulang==3){
			ngulang=0;
		}
	}
	for (i=0;i<15;i++){
		printf("%d ", barisanBilangan[i]);
	}
	return 0;
}
