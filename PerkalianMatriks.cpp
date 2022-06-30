/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : perkalian matriks
 *tanggal/versi :01122021/v.2
 *compiler : DEV C++
 */
 
#include <stdio.h>

int main(){
	/* Kamus Data */
	int A,B,C,D;
	int array[75][75];
	int array2[75][75];
	int hasil[75][75];
	int i,j,k;
	
	/*Kamus Data*/
	scanf("%d %d", &A,&B);
	if(A>0 && A<=75 && B>0 && B<=75){
		for(i=0;i<A;i++){
			for(j=0;j<B;j++){
			scanf("%d ", &array[i][j]);
			}
		}	
	}
	scanf("%d %d", &C,&D);
	if(C>0 && C<=75 && D>0 && D<=75){
		for(i=0;i<C;i++){
			for(j=0;j<D;j++){
				scanf("%d ", &array2[i][j]);
			}
		}
	}
	if(B==C){
		for(i=0;i<A;i++){
			for(j=0;j<D;j++){
                hasil[i][j]=0;
                for(k=0;k<C;k++){
                    hasil[i][j]=hasil[i][j]+(array[i][k]*array2[k][j]);
                }
			}
		}	
	}
	for(i=0;i<A;i++){
		for(j=0;j<D;j++){
			printf("%d ", hasil[i][j]);
			if(j==D-1){
				printf("\n");
			}
		}
	}
	return 0;
}
