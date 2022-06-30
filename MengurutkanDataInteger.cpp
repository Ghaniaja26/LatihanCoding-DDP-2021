/* Program: Mengurutkan data integer
 * Deskripsi: Mengurutkan 3 data integer secara descending.
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 20112021/v.1
 */
 
 #include <stdio.h>
 
 int main(){
 	/* Kamus Data */
 	int data[3];
 	int i=0;
 	int temp;
 	
 	/* Algoritma */
 	scanf("%d %d %d", &data[0], &data[1], &data[2]);
 	if (data[i]>=-300 && data[i]<=300){
 		for(i=0;i<2;i++){
 			if (data[i]<data[i+1]){
				temp=data[i];
				data[i]=data[i+1];
				data[i+1]=temp;
			}
		}
		i=1;
		if (data[i]>data[i-1]){
			temp=data[i];
			data[i]=data[i-1];
			data[i-1]=temp;
		}	
	}
	printf("%d %d %d", data[0],data[1],data[2]);
 	return 0;
 }
