/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Konversi Desimal ke Biner
 *tanggal/versi :05122021/v.1
 *compiler : DEV C++
 */
 
#include<stdio.h>

int main(){
	/* Kamus Data */
    int input,biner[100],hasil[100],i=0,j=0;
   
    /* Algoritma */
    scanf("%d", &input);
    while (input>0){
       hasil[j]=input%2;
       input=input/2;
       j++;
    }
    for(j=j-1;j>=0;j--){
    	biner[i]=hasil[j];
    	printf("%d", biner[i]);
    	i++;
	}
	return 0;
}
 
