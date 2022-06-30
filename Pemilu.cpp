/* Program: Challenge05_Nama.c
 * Deskripsi: Program menentukan kandidat pemenang pada pemilu
 * Nama: Muhamad Naufal AL.Ghani
 * Tanggal/versi: 24 November 2021 / 02
 * Compiler: Dev C++
 */

#include <stdio.h>

int TestCase(int T){
    int N,M,i,j,kandidat,hasil=0,suara[1000]={0};
    scanf("%d %d",&N,&M);
    int S[M][N];
    
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf ("%d",&S[i][j]);
            suara[j]+=S[i][j];
        }
    }
    
    for(i=0;i<N;i++){
        if(suara[i]>hasil){
            hasil=suara[i];
            kandidat=i+1;
        }
    }
    
    return kandidat;
}

int main(){
    int TotalCase,i,Got[1000]={};
    scanf("%d",&TotalCase);
    
    for(i=0;i<TotalCase;i++){
        Got[i]=TestCase(i);
    }
    
    for(i=0;i<TotalCase;i++){
        printf("%d\n",Got[i]);
    }
    
    return 0;    
}
