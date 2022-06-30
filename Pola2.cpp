/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Pola 2
 *tanggal/versi :04122021/v.1
 *compiler : DEV C++
 */
 
 #include <stdio.h>
 
 int main(){
 	/* Kamus Data */
 	int N,hasil=1;
	int arr[10][10];
 	int i,j;
 	/* Algoritma */
 	scanf("%d", &N);
 	if (N>=1 && N<=10){
 		for(i=0;i<N;i++){
 			for (j=0;j<=i;j++){
 				if (j==0){
 					arr[i][j]=hasil;
 					hasil=hasil*2;
 					printf("%d ",arr[i][j]);
					}
				if (j>0 && j<=i){
					arr[i][j]=arr[i-1][j-1];
					printf("%d ",arr[i][j]);
				}
 				if (j==i){
 					printf("\n");
				 }
			}
		 }
	}
	return 0;
 }
 
