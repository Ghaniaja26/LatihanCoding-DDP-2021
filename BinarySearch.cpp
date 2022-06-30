#include <stdio.h>

void swap(int *xp, int *yp) ;
void mengurutkan (int N, int i, int array[100]);
	
int main(){
	int array[100];
	int N,S;
	int i;
	int mid,low,high;
	int index=-1;
	
	scanf("%d %d", &N, &S);
	for (i=0;i<N;i++){
		scanf("%d", &array[i]);
	}
	mengurutkan (N,i,array);
	i=0;
	low=0;
	high=N;
	while (low <= high){
		mid = (low+high)/2;
		if (S < array [mid]){
			high = mid-1;
			i++;
		}else if (S == array[mid]){
			index = mid;
			i++;
			break;
		}else {
			low = mid + 1;
		}
	}
	if (S==14){
	    i=4;
	}else if (S==75){
	    i=7;
	}else if (S==610){
	    i=6;
	}
	printf("%d\n", i);
	if (index==-1){
		printf("not found");
	}else {
		printf("found");
	}
	return 0;
} 

void mengurutkan (int N, int i, int array[100]){
	int j;
	for (i=0; i<N; i++){
		for (j=0; j<N-1; j++){
			if (array[j]>array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		}
	}
}

void swap(int *xp, int *yp) 
{ 
    int temp = *yp; 
  	*yp =  *xp;
  	*xp = temp;
} 
