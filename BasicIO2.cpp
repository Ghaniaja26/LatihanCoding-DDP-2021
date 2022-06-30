/* 
Deskripsi : menampilkan bilangan dua kali lipat
Nama /Author : Muhamad Naufal Al Ghani
Tanggal/versi :29102021/v.1
*/

#include<stdio.h>

int main(){
    //tulis jawaban anda dibawah ini
    int x,y;
    int counter, hasil;
    scanf("%d""%d", &x,&y);
    counter = 0;
    while ((x+counter)<y){
    hasil = x+counter;
    printf("%d ", hasil);
    counter = counter+1;
    }
    printf("%d",y);
    return 0;
}
