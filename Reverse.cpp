/* Program: Reverse.c
 * Deskripsi: Membalikan string
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 27112021
 * Compiler: DEV C++
 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main(){
 	/* Kamus Data */
 	char X[1000];
 	char X2[10000];
 	int i;
 	int j=1;
 	int k;
 	
 	/* Algoritma */
 	scanf("%s", X);
 	for (i=0;i<strlen(X);i++){
 		k=strlen(X)-j;
 		X2[i]=X[k];
 		j=j+1;
	 }
	printf("%s", X2);
 	return 0;
 }
