/*
Deskripsi : menampilkan bilangan dua kali lipat
Nama /Author : Muhamad Naufal Al Ghani
Tanggal/versi :29102021/v.1

*/
#include<stdio.h>

int main (){
    //Kamus Data
    int x,y;
    int counter, hasil;
    
    //Algoritma
    scanf("%d""%d", &x,&y);
    counter = 0;
    while ((x+counter)<y){
    hasil = x+counter;
    printf("%d\n", hasil);
    counter = counter+1;
    }
    printf("%d",y);
    return 0;
}
