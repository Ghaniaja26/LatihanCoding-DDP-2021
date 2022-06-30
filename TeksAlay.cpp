/* Program: Validasi_Right_Saiful.c
 * Deskripsi: Menampilkan N buah karakter terkanan dari array karakter
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 07112021/v.1
 */
 
#include <stdio.h>
 
int main(){
     /* Kamus Data */
     char alay [50];
     
     /* Algoritma */
     scanf("%[^\n]", alay);
      for (int i = 0; alay[i] != '\0';i++)
    {
                //huruf a dan A
        if(alay[i]==65 || alay[i]==97){
            alay[i]=52;
        }
                //huruf e dan E
        if (alay[i]==101 || alay[i]==69){
            alay[i]=51;
        }
                //huruf i dan I
        if (alay[i]==73 || alay[i]==105){
            alay[i]=49;
        }
                //huruf z dan Z
        if (alay[i]==122 || alay[i]==90){
            alay[i]=48;
        }
                //huruf g dan G
        if(alay[i]==71 || alay[i]==103){
            alay[i]=54;
        }
                //huruf b dan B
        if(alay[i]==66 || alay[i]==98){
            alay[i]=56;
        }
        		// huruf j dan J
        if(alay[i]==106 || alay[i]==74){
        	alay[i]=55;
		}
    }
    printf("%s", alay);
    return 0;
}
