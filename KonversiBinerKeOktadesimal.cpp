/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Konversi biner ke oktadesimal
 *tanggal/versi :07122021/v.1
 *compiler : DEV C++
 */
 
 #include<stdio.h>
 
 int main(){
 	/* Kamus Data */
 	long input;
 	int hasil[100];
 	int okta[100];
 	int i=0,j=0;
 	
 	/* Algoritma */ 
 	scanf("%ld", &input);
 	while(input>0){
 		hasil[j]=input%8;	
		input=input/8;
		j++;
	 }
	for(j=j-1;j>=0;j--){
		okta[i]=hasil[j];
		printf("%d", okta[i]);	
	}
	return 0;
 }
