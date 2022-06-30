# include <stdio.h>

int main (void){
	int X[10];
	int count=0;
	int i=0;
	
	scanf("%d %d %d %d %d %d %d %d %d %d", &X[0],&X[1],&X[2],&X[3],&X[4],&X[5],&X[6],&X[7],&X[8],&X[9]);
	if (X[i]>=0 && X[i]<=32750){
	    while(i<10){
		    if (X[i]==2 || X[i]==3){
			    count=count+1;
		    }
		    if (X[i]%2!=0 && X[i]%3!=0 && X[i]!=1 &&X[i]!=32743){
			    count=count+1;
		    }
		i=i+1;
	    }
	}
	printf("%d", count);
	return 0;
}
 
 
 
 
