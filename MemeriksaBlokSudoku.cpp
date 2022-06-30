/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Memeriksa blok sudoku
 *tanggal/versi :02122021/v.1
 *compiler : DEV C++
 */
 
 #include <stdio.h>
 
 int main(){
 	/* Kamus Data */
 	int arr[3][3];
 	int i,j,k,l;
 	int kesalahan=0;
 	
 	/* Algoritma */
 	for(i=0;i<3;i++){
 		for (j=0;j<3;j++){
 			scanf ("%d ", &arr[i][j]);
		}
	}
	for (k=0;k<3;k++){
		for (l=0;l<3;l++){
			for (i=0;i<3;i++){
				for (j=0;j<3;j++){
					if((arr[k][l]==arr[i][j] && (k!=i || l!=j))){
						kesalahan++;
					}
				}
			}
		}
	}
	if (kesalahan>0){
		printf ("tidak valid");
	} else {
		printf ("valid");
	}
 	return 0;
 }
