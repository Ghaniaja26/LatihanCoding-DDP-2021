/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Pola 1
 *tanggal/versi :04122021/v.2
 *compiler : DEV C++
 */
 
 #include <stdio.h>
 
 int main(){
 	/* Kamus Data */
 	int N;
	char arr[10][10];
 	int i,j;
 	/* Algoritma */
 	scanf("%d", &N);
 	if (N>=1 && N<=10){
 		for(i=0;i<N;i++){
 			for (j=0;j<=i;j++){
 				arr[i][j]=42;
 				printf("%c ",arr[i][j]);
 				if (j==i){
 					printf("\n");
				 }
			}
		 }
	}
	return 0;
 }
