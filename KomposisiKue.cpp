/* Program: Komposisi Kue
 * Deskripsi: Menampilkan apakah komposisi kue 1 sama dengan kue 2 atau tidak
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 19112021/v.1
 */
 
 #include <stdio.h>
 
 
 int main(){
 	/* Algoritma */
 	float N;
 	char array1[123];
 	char array2[123];
 	int i,j;
 	float count=0;
 	float persen;
 	
 	/* Algoritma */
	scanf("%f\n", &N);
	scanf("%[^\n]%*c", array1);
	scanf("%[^\n]%*c", array2);
	for (i=0;array1[i];i+=2){
		for (j=0;array2[j];j+=2){
			if(array2[j]==array1[i]){
				count=count+1;
			}
		}
	}
	persen = count/8*100;
	if (persen>=N){
		printf("sama");
	}else {
		printf("tidak sama");
	}
	return 0;
 }
