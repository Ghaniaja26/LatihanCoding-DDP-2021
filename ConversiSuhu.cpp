/*Program : CelciusToFahrenheit.c
* Deskripsi : Mengonversi suhu dalam celcius ke fahrenheit
* Nama : Muhamad Naufal Al.Ghani
* tanggal/ versi :
* Catatan: °F = °C × 1,8 + 32
*/

#include<stdio.h>
#include<math.h>

int main(){
    /* Kamus Data */
    float celcius;
    float fahrenheit;
    
    /* Algoritma */
    scanf("%f", &celcius);
    if(-100<celcius){
    	fahrenheit = celcius * 1.8+32;
	}
    printf("%.2f", fahrenheit);
    return 0;
}
