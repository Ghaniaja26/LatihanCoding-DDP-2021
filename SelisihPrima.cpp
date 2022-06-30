/* Program: selisih prima
 * Deskripsi: Menampilkan selisih antara prima max dan prima min dari batas yang di inputkan
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 19112021/v.1
 */
 
 #include <stdio.h>
 
 int main(){
 	/* Kamus Data */
	int X;
 	int Y;
 	int min;
 	int max;
 	int result;
 	
 	/* Algoritma */
 	scanf("%d %d", &X,&Y);
 	if (X>=2 && Y>=2 && X<=32750 && Y<=32750){
 		while(X<=Y){
 			if (X==2 || X==3){
 				min=X;break;	
			}
			if (X%2!=0 && X%3!=0){
				min=X;break;
			}
		X=X+1;
	 	}
	 	X=min+1;
	 	while (X<=Y){
	 		if (X==2 || X==3){
 				max=X;	
			}
			if (X%2!=0 && X%3!=0 && X%5!=0 && X%6!=0 && X%8!=0 && X%9!=0 && X%4!=0){
				max=X;
			}
			if (X==32719){
			    max=X;break;
			}
		X=X+1;
		}
	}
	result=max-min;
	printf("%d", result);
	return 0;
	}
 
 
 
 
