/* Program: Validasi_RagamHuruf_Saiful.c
 * Deskripsi: Menghitung ragam jenis huruf pada array
 * Nama: 
 * Tanggal: 

 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main(){
 	/* Kamus Data */
 	char X[30];
 	int i=0;
 	int j=1;
 	int lenght;
 	int count;
 	
 	/* Algoritma */
 	scanf("%s", X);
 	lenght = strlen(X);
 	count = lenght;
 	while (i<lenght){
 		while (j<=lenght){
 			if (X[i]==X[j] || X[i]==X[j]+32 || X[i]==X[j]-32){
			 	count=count-1;
			 	break;
			 }
		j=j+1;
		}
	i=i+1;
	j=i+1;
	}
	printf("%d", count);
 }
 
 
