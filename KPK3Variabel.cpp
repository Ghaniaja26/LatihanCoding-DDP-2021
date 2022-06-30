/* Program: FPB3Var_Nama.c
 * Deskripsi: Menentukan FPB dari 3 Variabel
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 16012021
 * Compiler: DEV C++
 */

#include <stdio.h>

/*Deklarasi Prototype Modul*/
int KPK(int A, int B, int C);

int main() {
	/* Kamus data */
	int A,B,C;
	
	/* Algoritma */
	scanf("%d %d %d",&A ,&B, &C);
	printf("%d\n", KPK(A,B,C));
	return 0;
}

/*Body Function menentukan KPK */

int KPK(int A, int B, int C){

	/* Kamus Data */
	int max;
	int i=1;
	int j=0;
	int k=0;
	int bilcekprima=2;
	int faktor=0;
	int prima[500];
	int kpk[500];
	int hasil=1;
	
	/* Algoritma */
	if (A>B){
		max=A;
	}else {
		max=B;
	}
	if (C>max){
		max=C;
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
		while (A%prima[i]==0 || B%prima[i]==0 || C%prima[i]==0){
			kpk[k]=prima[i];
			if (A%prima[i]==0){
				A=A/prima[i];
			}
			if (B%prima[i]==0){
				B=B/prima[i];
			}
			if (C%prima[i]==0){
				C=C/prima[i];
			}
			k++;
		}
	}
	for (i=0;i<k;i++){
			hasil=hasil*kpk[i];
	}	
	return hasil;
}
