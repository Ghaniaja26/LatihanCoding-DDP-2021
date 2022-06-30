/* 
 *Nama : Muhamad Naufal AlGhani
 *Program : Pola 4
 *tanggal/versi :04122021/v.1
 *compiler : DEV C++
 */
 
 #include <stdio.h>
 
int main(){
	/* Kamus Data */
	int arr[10][10];
	int B,K;
	int i,j=0;
	int hasil=0;
	
	/* Algoritma */
	scanf("%d %d", &B,&K);
	if (B>=1 && B<=10 && K>=1 && K<=10){
		while (j<K){
			if (j%2==0){
				for(i=0;i<B;i++){
				hasil=hasil+1;
				arr[i][j]=hasil;
				}
				if (i==B){
					j=j+1;
				}
			}
			if (j%2!=0){
				for(i=B-1;i>=0;i--){
					hasil=hasil+1;
					arr[i][j]=hasil;
				}
				if (i<0){
					j=j+1;
				}
			}
		}
	}
	for (i=0;i<B;i++){
		for (j=0;j<K;j++){
			printf("%d ", arr[i][j]);
			if (j==K-1){
				printf("\n");
			}
		}
	}
	return 0;
}
 
