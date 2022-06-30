/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : KPK dari dua variabel
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
	int kpk[25];
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
		while (A%prima[i]==0 || B%prima[i]==0){
			kpk[k]=prima[i];
			if (A%prima[i]==0){
				A=A/prima[i];
			}
			if (B%prima[i]==0){
				B=B/prima[i];
			}
			k++;
		}
	}
	for (i=0;i<k;i++){
			hasil=hasil*kpk[i];
	}	
	printf("%d", hasil);
	return 0;
}
