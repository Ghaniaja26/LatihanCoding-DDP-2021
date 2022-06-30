/* Program: Rancangan Ruang Hotel
 * Deskripsi: Merancangan ruangan hotel seperti output yang diinginkan
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 23112021/v.1
 */

#include<stdio.h>
int main(){
   int x[21][21];
   int a, b=1, i=1, j,aT;
   scanf("%d", &a);
   
   x[1][a] = 1;
   aT= a;
   for(j=(a-1);j>=1;j--) {
      x[i][j]= x[i][j+1] + b;
      b++;
   }
   for ( i = 2; i <= a; i++)
   {
      for ( j = a; j > 0; j--)
      {
         if (j-1>0)
         {
            x[i][j]=x[i-1][j-1]+1;
         }
         else
         {
            x[i][j]=x[i-1][j]+aT;
            aT--;
         }
         
      }
      
   }
      for(i=1; i<=a; i++) {
        for(j=1;j<=a;j++) {
         printf("%d ", x[i][j]);
         if(j==a){
            printf("\n");
         }
      }
   }
  return 0;
}
