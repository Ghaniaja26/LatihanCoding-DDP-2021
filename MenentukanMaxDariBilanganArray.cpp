/* Program: MaxSepuluhData_Nama.c
 * Deskripsi: Menentukan nilai tebesar dari 10 data array
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 19122021/v.1
 * Compiler: DEV C++
 */

#include <stdio.h>
#define MAX_DATA 10

/*Deklarasi Prototype Modul*/
int max(int value1, int value2);
int maxValueNumbers(int numbers[],int N);
void inputValue(int numbers[], int N);


int main() {
	/* Kamus data */
	int numbers1[MAX_DATA],numbers2[MAX_DATA];

	/* Algoritma */
	/*Pemanggilan dan penggunaan prosedur inputValue untuk
	  memasukkan nilai ke dalam array */
	inputValue(numbers1,MAX_DATA);
	inputValue(numbers2,MAX_DATA);

	/* Menjalankan fungsi untuk menentukan nilai max dari array */
	printf("%d %d\n",maxValueNumbers(numbers1,MAX_DATA),maxValueNumbers(numbers2,MAX_DATA));

	return 0;
}

/*Tulis Body Function menentukan nilai terbesar*/
	int max(int value1, int value2){
		int terbesar;
		if (value1>value2){
			terbesar=value1;
		}else {
			terbesar=value2;
		}
		return terbesar;
	}
/*Tulis Body Function menentukan nilai terbesar dari 10 data dalam array*/
	int maxValueNumbers(int numbers[],int N){
		int gede,i;
		gede=numbers[0];
		for(i=0;i<N;i++){
			gede=max(gede,numbers[i]);
		}
		return gede;
	}
/*Body Procedure untuk menginputkan data ke dalam array*/
void inputValue(int numbers[], int N){
	int i;
	for ( i = 0 ; i < N ; i++ )
		scanf("%d ",&numbers[i]);
}

