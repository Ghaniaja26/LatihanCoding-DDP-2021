/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Konversi biner ke heksadimal
 *tanggal/versi :07122021/v.1
 *compiler : DEV C++
 */
 
 #include<stdio.h>
 
 int main(){
 	/* Kamus Data */
 	long input;
 	int hasil[100];
 	int heksa[100];
 	char huruf[100];
 	int i=0,j=0;
 	
 	/* Algoritma */ 
 	scanf("%ld", &input);
 	while(input>0){
 		hasil[j]=input%16;
 		switch(hasil[j]){
 			case 10 : huruf[j]=65;break;
			case 11 : huruf[j]=66;break;
			case 12 : huruf[j]=67;break;
			case 13 : huruf[j]=68;break;
			case 14 : huruf[j]=69;break;
			case 15	: huruf[j]=70;break;
		}	
		input=input/16;
		j++;
	 }
	for(j=j-1;j>=0;j--){
		if(hasil[j]>9){
			printf("%c", huruf[j]);
		}
		if (hasil[j]<10){
			heksa[i]=hasil[j];
			printf("%d", heksa[i]);
		}
	}
	return 0;
 }
