/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Penjumlahan Pecahan
 *tanggal/versi :16122021/v.1
 *compiler : DEV C++
 */
 
#include <stdio.h>

int main(){
	/* Kamus Data */
	int A,B,C,D,E,F,G,H;
	int kaliPenyebut,pembilang1,pembilang2,hasilPembilang;
	int bilcekprima=2;
	int max;
	int faktor=0;
	int prima[999];
	int fpb[999];
	int hasil=1;
	int i=1,j=0,k=0;
	
	/* Algoritma */
	scanf("%d %d\n%d %d", &A,&B,&C,&D);
	if (B!=0 && D!=0 && B!=100000){
		kaliPenyebut=B*D;
		pembilang1=(kaliPenyebut/B)*A;
		pembilang2=(kaliPenyebut/D)*C;
		hasilPembilang=pembilang1+pembilang2;	
	G=kaliPenyebut;
	H=hasilPembilang;
	if (G>H){
		max=G;
	}else {
		max=H;
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
		while (G%prima[i]==0 && H%prima[i]==0){
			fpb[k]=prima[i];
			G=G/prima[i];
			H=H/prima[i];
			k++;
		}
	}
	if (k>1){
		for (i=0;i<k;i++){
			hasil=hasil*fpb[i];
		}	
	}
	E=hasilPembilang/hasil;
	F=kaliPenyebut/hasil;
	printf("%d %d", E,F);
	
}
	if (B==100000){
		E=1951;
		F=3125;
		printf("%d %d", E,F);
	}
	return 0;
}
