/* Program: FPB3Var_Nama.c
 * Deskripsi: Menentukan FPB dari 3 Variabel
 * Nama: 
 * Tanggal/versi: 
 * Compiler: 
 */

#include <stdio.h>

/*Deklarasi Prototype Modul*/
int FPB(int A, int B);

int main() {
	/* Kamus data */
	int A,B,C;
	int hasil1;
	int hasil2;
	
	/* Algoritma */
	scanf("%d %d %d",&A ,&B, &C);
	hasil1=FPB(A,B);
	hasil2=FPB(C,hasil1);
	printf("%d\n", hasil2);
	return 0;
}

/*Body Function menentukan FPB */

int FPB(int A, int B){
	/* Kamus Data */
	int max;
	int i=1;
	int j=0;
	int k=0;
	int bilcekprima=2;
	int faktor=0;
	int prima[500];
	int fpb[500];
	int hasil=1;
	
	/* Algoritma */
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
	return hasil;
}
