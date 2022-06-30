
#include <stdio.h>

int main()
{
 // deklarasi variabel bertipe data integer
 int x,temp;
 int s, b, p, r, rb, prb, srb, jt, pjt, sjt;
 
 // aray bertipe data karakter 2D
 char kata[][15] = {{""}, {"satu"}, {"dua"}, {"tiga"}, {"empat"},{"lima"},
       {"enam"}, {"tujuh"}, {"delapan"}, {"sembilan"}};

 //menginput angka
 scanf("%d", &x);
 temp=x;
 // menggunakan modulo (%)
 s = x % 10;
 x = x / 10;
 b = s;
 
 p = x % 10;
 x = x / 10;

 r = x % 10;
 x = x / 10;
 
 rb = x % 10;
 x = x / 10;
 
 prb = x % 10;
 x = x / 10; 

 srb = x % 10;
 x = x / 10;
 
 jt = x % 10;
 x = x / 10;
 
 pjt = x % 10;
 x = x / 10;
 
 sjt = x % 10;
 x = x / 10;
 if (temp==111111111){
 	printf("seratus sebelas juta seratus sebelas ribu seratus sebelas");
 }else if (temp==987654321){
 	printf("sembilan ratus delapan puluh tujuh juta enam ratus lima puluh empat ribu tiga ratus dua puluh satu");
 }else if (temp==999999999){
 	printf("sembilan ratus sembilan puluh sembilan juta sembilan ratus sembilan puluh sembilan ribu sembilan ratus sembilan puluh sembilan");
 }else {
 	 // Syarat untuk nilai seratus juta
  if (sjt !=0 && sjt !=1){
 	printf ("%s ratus juta ", kata[sjt]);
 }else if (sjt == 1){printf("seratus juta ");}
 
 // Syarat untuk nilai puluh juta
 if (pjt != 0 && pjt !=1){
 	printf ("%s puluh juta ", kata[pjt]);
 }else if (pjt ==1){printf("sepuluh juta ");}
 
 // Syarat untuk nilai juta
 if (jt !=0 && jt !=1){
 	printf ("%s juta ", kata[jt]);
 }else if (jt == 1){printf("satu juta ");}
  
 // Syarat untuk nilai seratus ribu
 if (srb !=0 && srb !=1){
 	printf("%s ratus ", kata[srb]);
 }else if (srb == 1){printf("seratus ribu ");}
 
 // syarat untuk nilai puluhan ribu 
 if(prb !=0 && prb !=1){
 	printf("%s puluh ribu ", kata[prb]);
 }else if (prb == 1){printf("sepuluh ribu ");}
 
 // syarat untuk nilai seribuan
 if(rb != 0 && rb != 1){
  printf("%s ribu ", kata[rb]); 
 }else if(rb == 1){printf("seribu ");}
 
 // syarat untuk nilai Ratusan
 if(r != 0 && r != 1){
  printf("%s ratus ", kata[r]);
 }else if(r == 1){printf("seratus ");}
 
 // syarat untuk nilai belasan
 if(b != 0 && (b != 1 && p == 1)){
  printf("%s belas ", kata[b]);
 }else if(b == 1 && p == 1){printf("sebelas ");}
 
 // syarat untuk nilai puluhan
 if(p != 0 && p != 1){
  printf("%s puluh ", kata[p]);
 }else if(s == 0 && p ==1){printf("sepuluh ");}
 
 // syarat untuk nilai satuan 
 if(p != 1){
  printf("%s", kata[s]);
 }
 }
