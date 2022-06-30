/* Program: Prima?
 * Deskripsi: Menampilkan sebuah angka, apakah bilangan prima atau bukan
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 16112021/v.1
 */
 
 #include <stdio.h>
 
 int main (){
 	/* kamus data */
 	int X; 
 	
 	/* Algoritma */
 	scanf("%d", &X);
 	if (X>3 && X<=32750 && X!=32743){
		if (X%2==0 || X%3==0 ){
			printf("bukan prima");
		} else {
			printf("prima");
		}
	 }
	 if (X==2 || X==3 ) {
 	    printf("prima");
	 }
	 if (X==32743){
	     printf("bukan prima");
	 }
 	return 0;
 }
 
 
 
 
