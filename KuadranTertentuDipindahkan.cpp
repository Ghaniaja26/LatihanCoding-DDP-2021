/* Nama : Muhamad Naufal Al.Ghani
 * Program : Kuadran tertentu dipindahkan
 * Tanggal/versi : 29112021/v.1
 * Compiler : DEV C++
 */
 
 #include <stdio.h>
 
 int main(){
 	/* Kamus Data */
 	int jumlah;
	typedef struct {
  		int x;
  		int y;
	}record;
	int kuadran;
	int i,count=0;
	
	/* Algoritma */
	scanf("%d\n", &jumlah);
	record point[jumlah];
	for (i=0;i<jumlah;i++){
		scanf("%d %d\n", &point[i].x,&point[i].y);
	}
	scanf("%d", &kuadran);
	if (jumlah>=1 && jumlah<=10 && kuadran>=1 && kuadran<=4){
		for (i=0;i<jumlah;i++){	
			if(kuadran==1 && point[i].x>=0 && point[i].y>=0){
				count=count+1;
			}
			if(kuadran==2 && point[i].x<=0 && point[i].y>=0){
				count=count+1;
			}
			if(kuadran==3 && point[i].x<=0&& point[i].y<=0){
				count=count+1;
			}
			if(kuadran==4 && point[i].x>=0&& point[i].y<=0){
				count=count+1;
			}
		}
	}
	printf("%d\n", count);
	for (i=0;i<jumlah;i++){	
		if(kuadran==1 && point[i].x>=0 && point[i].y>=0){
			printf("%d %d\n", point[i].x,point[i].y);
		}
		if(kuadran==2 && point[i].x<=0 && point[i].y>=0){
			printf("%d %d\n", point[i].x,point[i].y);
		}
		if(kuadran==3 && point[i].x<=0&& point[i].y<=0){
			printf("%d %d\n", point[i].x,point[i].y);
		}
		if(kuadran==4 && point[i].x>=0&& point[i].y<=0){
			printf("%d %d\n", point[i].x,point[i].y);
		}
	}
 	return 0;
 }
