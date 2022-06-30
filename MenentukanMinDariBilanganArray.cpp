/* Program: MinSepuluhData_Nama.c
 * Deskripsi: Menentukan nilai terkecil dari 10 data array
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 19122021/v.1
 * Compiler: DEV C++
 */

#include <stdio.h>
#define MAX_DATA 10

/*Deklarasi Prototype Modul*/
int min(int value1, int value2);
int minValueNumbers(int numbers[],int N);
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
	printf("%d %d\n",minValueNumbers(numbers1,MAX_DATA),minValueNumbers(numbers2,MAX_DATA));

	return 0;
}

/*Tulis Body Function menentukan nilai terbesar*/
	int min(int value1, int value2){
		int terkecil;
		if (value1<value2){
			terkecil=value1;
		}else {
			terkecil=value2;
		}
		return terkecil;
	}
/*Tulis Body Function menentukan nilai terbesar dari 10 data dalam array*/
	int minValueNumbers(int numbers[],int N){
		int kecil,i;
		kecil=numbers[0];
		for(i=0;i<N;i++){
			kecil=min(kecil,numbers[i]);
		}
		return kecil;
	}
/*Body Procedure untuk menginputkan data ke dalam array*/
void inputValue(int numbers[], int N){
	int i;
	for ( i = 0 ; i < N ; i++ )
		scanf("%d ",&numbers[i]);
}

