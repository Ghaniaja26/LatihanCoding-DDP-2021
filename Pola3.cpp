/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Pola 3
 *tanggal/versi :04122021/v.1
 *compiler : DEV C++
 */
 
 #include <stdio.h>
 
 int main(){
 	/* Kamus Data */
 	int N,hasil=0;
	int arr[10][10];
 	int i,j,kolom;
 	/* Algoritma */
 	scanf("%d", &N);
 	kolom=N;
 	if (N>=1 && N<=10){
 		for(i=0;i<N;i++){
 			for (j=0;j<kolom;j++){
 				hasil=hasil+1;
 				arr[i][j]=hasil;
 				printf("%d ", arr[i][j]);
 				if (j==kolom-1){
 					kolom--;
 					printf("\n");
				 }
			}
		 }
	}
	return 0;
 }
 
