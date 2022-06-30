/* Program: String Compare
 * Deskripsi: Membandingkan string pertama dengan string kedua 
 * Nama: Muhamad Naufal Al.Ghani
 * Tanggal/versi: 23112021/v.2
 */
 
 #include<stdio.h>
 
 int main(){
 	/* Kamus Data */
 	char k1[10];
 	char k2[10];
 	int i=0;
 	int beda;
 	int jumlah1=0;
 	int jumlah2=0;
 	int sum;
 	
 	/* Algoritma */
 	scanf("%s\n", k1);
 	scanf("%s", k2);
 	for(i=0;k1[i]!='\0';i++){
 		if (k1[i]==k2[i]){
 			jumlah1=jumlah1+k1[i];
 			jumlah2=jumlah2+k2[i];
		}
		if (k1[i]!=k2[i]){
			jumlah1=jumlah1+k1[i];
			jumlah2=jumlah2+k2[i];
			break;
		}
	 }
	sum=jumlah1-jumlah2;
	i=0;
	for(i=0;k1[i]!='\0';i++){
		if (k1[i]!=k2[i]){
			beda=i+1;break;
		}
		if (k1[i]==k2[i]){
			beda=0;
		}
	}
	if (sum>0){
		printf("+%d", sum);
	}
	if (sum<=0){
		printf("%d", sum);
	}
	printf("\n%d", beda);
	return 0;
 }
