/* Nama : Muhamad Naufal Al.Ghani
 * Program : Kesamaan array point
 * Tanggal/versi : 28112021/v.1
 * Compiler : DEV C++
 */
 
 #include <stdio.h>
 
 int main(){
 	/* Kamus Data */
 	typedef struct{
 		int x;
		int y;	
	}array;
	int i;
	
	/* Algoritma */
	array M[5];
	for (i=0;i<5;i++){
		scanf("%d %d\n", &M[i].x,&M[i].y);
	}
	array N[5];
	for (i=0;i<5;i++){
		scanf("%d %d\n", &N[i].x,&N[i].y);
	}
	for (i=0;i<5;i++){
		if (M[i].x!=N[i].x || M[i].y!=N[i].y){
			printf("tidak sama");break;
		}
	}
	if (i==5){
		printf("sama");
	}
 	return 0;
 }
