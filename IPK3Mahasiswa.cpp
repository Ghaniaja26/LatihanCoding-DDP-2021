#include <stdio.h>

/*Deklarasi Prototype Modul */
float hitungSKS();

int main() {
	/* Kamus data */
	char nama1[10];
	char nama2[10];
	char nama3[10];
	float hasil1, hasil2, hasil3;
	
	/* Algoritma */
	scanf("%s", nama1);
	hasil1=hitungSKS();
	scanf("%s", nama2);
	hasil2=hitungSKS();
	scanf("%s", nama3);
	hasil3=hitungSKS();
	printf("%s %3.2f\n", nama1, hasil1);
	printf("%s %3.2f\n", nama2, hasil2);
	printf("%s %3.2f", nama3, hasil3);
}

/*Body Function menentukan KPK */

float hitungSKS(){
	char skor;
	float hasil=0;
	int i=0;
	while (i<=4){
		scanf("%c ", &skor);
		switch (i){
			case 1 : 
			switch (skor){
			case 'A' : hasil=hasil+16;break;
			case 'B' : hasil=hasil+12;break;
			case 'C' : hasil=hasil+8;break;
			case 'D' : hasil=hasil+4;break;
			case 'E' : hasil=hasil+0;break;
		}break;
			case 2 : 
			switch (skor){
			case 'A' : hasil=hasil+12;break;
			case 'B' : hasil=hasil+9;break;
			case 'C' : hasil=hasil+6;break;
			case 'D' : hasil=hasil+3;break;
			case 'E' : hasil=hasil+0;break;
		}break;
			case 3 : 
			switch (skor){
			case 'A' : hasil=hasil+12;break;
			case 'B' : hasil=hasil+9;break;
			case 'C' : hasil=hasil+6;break;
			case 'D' : hasil=hasil+3;break;
			case 'E' : hasil=hasil+0;break;
		}break;
			case 4 : 
			switch (skor){
			case 'A' : hasil=hasil+8;break;
			case 'B' : hasil=hasil+6;break;
			case 'C' : hasil=hasil+4;break;
			case 'D' : hasil=hasil+2;break;
			case 'E' : hasil=hasil+0;break;
		}break;
		}
		i++;
	}
	hasil=hasil/12;
	return hasil;
}
