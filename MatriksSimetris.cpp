/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : matriks simetris
 *tanggal/versi :02122021/v.2
 *compiler : DEV C++
 */
 
 #include <stdio.h>
 
 int main(){
 	/* kamus Data */
 	int arr[3][3];
 	int i,j;
 	int benar=0;
 	
 	/* Algoritma  */
 	for (i=0;i<3;i++){
 		for (j=0;j<3;j++){
 			scanf("%d ", &arr[i][j]);		
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (arr[i][j]==arr[j][i] && i!=j){
				benar++;
			}
		}
	}
	if (benar==6){
		printf ("matriks simetris");
	} else {
		printf ("bukan matriks simetris");
	}
 	return 0;	
 }
