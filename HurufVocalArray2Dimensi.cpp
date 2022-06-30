/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Penjumlahan Matriks
 *tanggal/versi :30112021/v.1
 *compiler : DEV C++
 */
 
 #include <stdio.h>
 
 int main(){
 	/* Kamus Data */
 	int array1[3][3];
 	int array2[3][3];
 	int arrayhasil[3][3];
 	int i,j;
 	
 	/* Algoritma */
 	for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			scanf("%d", &array1[i][j]);
		}
	}
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &array2[i][j]);
		}
	}
	for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			arrayhasil[i][j]=array1[i][j]+array2[i][j];	
 			if (i==0 || i==1 || i==2){
 				printf("%d ", arrayhasil[i][j]);		
			}
			if (j==2){
				printf("\n");
			}	
		}	
 	}
 	return 0;
 }
