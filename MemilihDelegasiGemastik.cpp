#include <stdio.h>

int kombinasi (int N, int M);

int main(){
	int M,N;
	scanf("%d %d", &N, &M);
	printf("%d", kombinasi(N,M));
	return 0;
}

int kombinasi (int N, int M){
	int i=1;
	int hasil;
	int hasil1;
	int hasil2;
	int pengurangan;
	int faktorial2;
	hasil1=N;
	faktorial2=M;
	pengurangan=N-M;
	hasil2=pengurangan;
	if ((M>=1 && M<=12) && (N>=1 && N<=12)){
		if (N>0){
			while (i<N){
				hasil1=hasil1*i;
				i++;
			}
		}else if (N==0){
			hasil1=1;
		}
		if (M>0){
			i=1;
			while (i<M){
				faktorial2=faktorial2*i;
				i++;
			}
		}else if (N==0){
			faktorial2=1;
		}
		if (pengurangan>0){
			i=1;
			while (i<pengurangan){
				hasil2=hasil2*i;
				i++;
			}
		}else if (pengurangan==0){
			hasil2=1;
		}
		hasil2=hasil2*faktorial2;
		hasil=hasil1/hasil2;
	}
	return hasil;
}
