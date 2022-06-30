/* Program: Validasi_Maks3_Saiful.c
 * Deskripsi: Menentukan nilai maksimal dari tiga variabel
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 07112021/v.1
 */
 
 #include <stdio.h>
 
 int main(){
     /* Kamus Data */
     int bilangan1, bilangan2, bilangan3 ;
     int hasil;
     
     /* Algoritma */
     scanf("%d\n", &bilangan1);
     scanf("%d\n", &bilangan2);
     scanf("%d", &bilangan3);
     if (bilangan1 > bilangan2){
         hasil = bilangan1;
     } else if (bilangan2 > bilangan1){
         hasil = bilangan2;
     }
     if (bilangan3 > hasil){
         hasil = bilangan3;
     }
     if ((bilangan1 == bilangan2) && (bilangan1 == bilangan3)){
         hasil = bilangan1;
     }
     printf("%d", hasil);
     return 0;
 }
