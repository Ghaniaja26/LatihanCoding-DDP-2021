#include <stdio.h>

int main(){
	int M,N;
	int i=1;
	int j=1;
	int hasil;
	int hasil1;
	int hasil2;
	int pengurangan;
	scanf("%d %d", &M, &N);
	hasil1=N;
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
		if (pengurangan>0){
			while (j<pengurangan){
				hasil2=hasil2*j;
				j++;
			}
		}else if (pengurangan==0){
			hasil2=1;
		}
		hasil=hasil1/hasil2;
	}
	printf("%d", hasil);
	return 0;
}
