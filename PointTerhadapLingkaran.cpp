/* Program: Point Terhadap Lingkaran.c
 * Deskripsi: Menentukan posisis sebuah titik pada lingkaran
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 27112021
 * Compiler: DEV C++
 */
 
 #include <stdio.h>
 
 int main(){
 	/* kamus Data */
 	int sumbuX, sumbuY; // titik pusat di koordinat X,Y
 	int jari;
 	int pointX, pointY; // titik yang mau diuji
 	
 	/* Algoritma */
 	scanf("%d %d\n", &sumbuX, &sumbuY);
 	scanf("%d\n", &jari);
 	scanf("%d %d", &pointX, &pointY);
 	if (sumbuX==pointX && sumbuY==pointY){
 		printf("tepat pada titik pusat");
	}
	if ((pointX==jari && pointY==sumbuY) || (pointY==jari && pointX==sumbuX)){
		printf("tepat pada lingkaran");
	}
	if (pointX>jari && pointY>jari){
		printf("di luar lingkaran");
	}
	if ((pointX<jari && pointY==sumbuY && pointX!=sumbuX) || (pointX==sumbuX && pointY<jari && pointY!=sumbuY) || (pointX>sumbuX && pointX<jari && pointY>sumbuY && pointY<jari)){
		printf("di dalam lingkaran");
	}
	return 0;
 }
