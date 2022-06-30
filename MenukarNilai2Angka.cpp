/* Program: MenukarDuaAngka_Nama.c
 * Deskripsi: Menukar nilai dari dua angka pada variabel
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 19122021/v.1
 * Compiler: Dev C++
 */

#include <stdio.h>

/*Deklarasi Prototype Modul*/
void swapValue(int *value1, int *value2);

int main() {
	/* Kamus data */
	int number1, number2;

	/* Algoritma */
	scanf("%d %d", &number1, &number2);
	/*Panggil modul prosedur swapValue dengan parameter number1 dan number2 */
	/*Salah satu contoh penggunaan parameter input/output */
	swapValue(&number1,&number2);

	/*Hasil setelah dua nilai ditukar*/
	printf("%d %d\n",number1,number2);

	return 0;
}

/*Body Procedure */
void swapValue(int *value1, int *value2){
	int temp; //penampungan nilai sementara
	temp=*value1;
	*value1=*value2;
	*value2=temp;
	//lakukan penukaran nilai dengan algoritma berikut :
	//temp <- *value1
	//*value1 <- *value2
	//*value2 <- temp
} 
