/* 
 *Nama : Muhamad Naufal AlGhani{
 *Program : komposisi kue versi 2
 *tanggal/versi :10122021/v.2
 *compiler : DEV C++
 */
 
 #include<stdio.h>
 
int main(){
	/* Kamus Data */
	int P;
	int Q;
	float count=0;
	float N;
	float persen;
	char kueK[8][8];
	char kueL[8][8];
	int i=0,k=0;
		
	/* Algoritma */	
		scanf("%f\n", &N);
	scanf("%d\n", &P);
	for(i=0;i<P;i++){
		scanf("%s\n", kueK[i]);
	}
	scanf("%d\n", &Q);
	for(i=0;i<Q;i++){
		scanf("%s\n", kueL[i]);
	}
	for (i=0;i<Q;i++){
		for (k=0;k<P;k++){
				if(*kueL[k]==*kueK[i]){
				count++;
				break;
			}
		}
	}
	count=count-1;
	persen=count/Q*100;
	if (persen>=N){
		printf("sama");
	}else{
		printf("tidak sama");
	}
	return 0;
}
