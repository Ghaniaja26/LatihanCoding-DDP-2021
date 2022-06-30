/* 
 *Nama : Muhamad Naufal AlGhani{
 *Program : FPD dari dua variabel
 *tanggal/versi :15122021/v.1
 *compiler : DEV C++
 */
 

#include <stdio.h>

int main(){
	/* Kamus Data */
	int A,B,max;
	int i=1;
	int j=0;
	int k=0;
	int bilcekprima=2;
	int faktor=0;
	int prima[25];
	int fpb[25];
	int hasil=1;
	
	/* Algoritma */
	scanf ("%d %d", &A,&B);
	if (A>B){
		max=A;
	}else {
		max=B;
	}
	while (bilcekprima<=max){
		for (i=1;i<=bilcekprima;i++){
			if (bilcekprima%i==0){
				faktor++;
				if (faktor>2){
					break;
				}
			}
		}
		if (faktor==2){
			prima[j]=bilcekprima;
			j++;
		}
		bilcekprima++;
		faktor=0;
	}
	for (i=0;i<j;i++){
		while (A%prima[i]==0 && B%prima[i]==0){
			fpb[k]=prima[i];
			A=A/prima[i];
			B=B/prima[i];
			k++;
		}
	}
	if (k==1){
		hasil=fpb[0];
	}
	if (k>1){
		for (i=0;i<k;i++){
			hasil=hasil*fpb[i];
		}	
	}
	printf("%d", hasil);
	return 0;
}
