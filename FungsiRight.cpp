/* Program: Validasi_Right_Saiful.c
 * Deskripsi: Menampilkan N buah karakter terkanan dari array karakter
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 12112021/v.1
 */
 
 #include <stdio.h>
 #include <string.h>
 
int main (){
     /* kamus Data */
     char S[30];
     char H;
     int N;
     int lenght;
     int pemotongan;
     
     /* Algoritma */
     scanf("%[^\n]", S);
     scanf("\n%d", &N);
     lenght = strlen(S);
     if (N>0 && N<=lenght){
     	pemotongan = lenght - N;
		while (pemotongan < lenght){
			H=S[pemotongan];
			printf ("%c", H);
			pemotongan=pemotongan + 1;
		}		
	 }
     return 0;
}
