/*Program : BiayaParkir.c
* Deskripsi : Menghitung biaya parkir
* Nama : 
* tanggal/ versi :
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    int jenisKendaraan;
    int waktu;
    int totalBiaya;

    /* Algoritma */
    scanf("%d\n", &jenisKendaraan);
    scanf("%d", &waktu);
    
    switch(jenisKendaraan){
        case 1 : totalBiaya = 2000;
          break; 
        case 2 : totalBiaya = 1000;
          break;
    }
    if (totalBiaya==2000) {
    	totalBiaya=(waktu-1)*1000+totalBiaya;
	}else if(totalBiaya==1000){
		totalBiaya=(waktu-1)*500+totalBiaya;
	}
	printf("%d", totalBiaya);
    return 0;
}

