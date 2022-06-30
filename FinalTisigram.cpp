#include <stdio.h>

void swap(int *xp, int *yp);

int main(){
	int N,R;
	int array[1000];
	int i,j;
	
	scanf("%d %d", &N, &R);
	for	(i=0;i<N;i++){
		scanf("%d", &array[i]);
	}
	for (i=0;i<N;i++){
		for (j=0;j<N-1;j++){
			if (array[j]<array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		}
	}
	for (i=0;i<R;i++){
		printf("%d\n", array[i]);
	}
	return 0;
}

void swap(int *xp, int *yp) 
{ 
    int temp = *yp; 
  	*yp =  *xp;
  	*xp = temp;
} 
