/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Bilangan tanpa akhiran 4
 *tanggal/versi :08122021/v.1
 *compiler : DEV C++
 */
 
 #include<stdio.h>
 
 int main(){
 	/* Kamus Data */
 	int X;
 	int Y;
 	int count=0;
 	
 	/*Algoritma */
 	scanf("%d %d", &X,&Y);
 	if(X>=1 && X<=500 && Y>=1 && Y<=500){
 		for (X=X+1;X<Y;X++){
 			if(X%10!=4 && X!=4){
 				count++;
			} 
 		}
	 }
	 printf("%d", count);
	return 0;
 }
