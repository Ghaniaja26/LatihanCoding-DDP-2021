/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Ganjil Dua Dimensi
 *tanggal/versi : 29112021/v.1
 *compiler : DEV C++
 */
 
 #include <stdio.h>
 
 int main(){
 	/* Kamus Data */
 	int array[4][4];
 	int i=0,j=0;
 	int count=0;
 	/* Algoritma */
 	for (i=0;i<4;i++){
 		for(j=0;j<4;j++){
 			scanf("%d", &array[i][j]);
 			if (array[i][j] % 2 !=0){
 				count=count+1;
			 }
		}
	}
	printf("%d", count);
 	return 0;
 }
