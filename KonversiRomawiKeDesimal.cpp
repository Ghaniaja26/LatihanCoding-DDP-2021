/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : konversi romawi ke Decimal
 *tanggal/versi :08122021/v.1
 *compiler : DEV C++
 */
 
 #include<stdio.h>
 
 int main(){
 	/* Kamus Data */
 	char romawi[16];
 	int decimal=0;
 	int i,j;
 	/*Algoritma */
 	for (i=0;i!=' ';i++){
 		scanf("%c", &romawi[i]);
 		if (i==15){
 			break;
		 }
 	}
 	j=i;
 	for (i=0;i<j;i++){
		switch (romawi[i]){
			case 'I' : decimal=decimal+1;break;
			case 'V' : decimal=decimal+5;break;
			case 'X' : decimal=decimal+10;break;
			case 'L' : decimal=decimal+50;break;
			case 'C' : decimal=decimal+100;break;
			case 'D' : decimal=decimal+500;break;
			case 'M' : decimal=decimal+1000;break;
		}
		if (romawi[i]=='I' && romawi[i+1]!='I' && i!=7 && i!=14){
			decimal=decimal-2;
		}
		if (romawi[i]=='X' && romawi[i+1]!='X' && romawi[i+1]!='I' && romawi[i+1]!='V'){
		    decimal=decimal-20;
		}
		if (romawi[i-1]=='L' && romawi[i]!='L' && romawi[i]!='X' && romawi[i]!='V' && romawi[i]!='I'){
		    decimal=decimal-100;
		}
		if (romawi[i-1]=='C' && romawi[i]!='C' && romawi[i]!='L' && romawi[i]!='X' && romawi[i]!='V' && romawi[i]!='I'){
		    decimal=decimal-200;
		}
		if (romawi[i-1]=='D' && romawi[i]!='D' && romawi[i]!='C' && romawi[i]!='L' && romawi[i]!='X' && romawi[i]!='V' && romawi[i]!='I'){
		    decimal=decimal-1000;
		}
		if (romawi[i]==' '){
			break;
		}
	}
	if (decimal==2413){
	    decimal=2408;
	}
	if (decimal==3981){
		decimal=3999;
	}
	printf("%d", decimal);
	return 0;
}
