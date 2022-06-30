/*Program : LuasLingkaran.c
* Deskripsi : Menghitung Luas Lingkaran dari Jari-Jarinya
* Nama : 
* tanggal/ versi :
*/

#include<stdio.h>
#include<math.h>

int main(){
    /* Kamus Data */
    float luas; // variable luas lingkaran
    float r;    // variable jari-jari lingkaran
    float phi;
    /* Algoritma */
    phi = 3.14;
    scanf("%f", &r);
    luas = phi*r*r;
    printf("%.2f", luas);
    return 0;
}
