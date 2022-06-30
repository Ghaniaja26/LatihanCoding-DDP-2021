/* 
 *Nama : Muhamad Naufal AlGhani{
 *Program : konversi decimal ke romawi
 *tanggal/versi :09122021/v.1
 *compiler : DEV C++
 */
 
 #include<stdio.h>
 
int main(){
	/* Kamus Data */
	char romawi[15];
	int decimal;
	int i=0,j=0;
	
	/* Algoritma */
	scanf("%d", &decimal);
	while(decimal>0){
		for (i=0;i<100;i++){
			if (decimal/1000!=0){
				romawi[j]='M';
				decimal=decimal-1000;j++;break;
			}
			if (decimal/900!=0){
				romawi[j]='C';
				romawi[j+1]='M';
				decimal=decimal-900;j=j+2;break;
			}
			if (decimal/500!=0){
				romawi[j]='D';
				decimal=decimal-500;j++;break;
			}
			if (decimal/400!=0){
				romawi[j]='C';
				romawi[j+1]='D';
				decimal=decimal-400;j=j+2;break;
			}
			if (decimal/100!=0){
				romawi[j]='C';
				decimal=decimal-100;j++;break;
			}
			if (decimal/90!=0){
				romawi[j]='X';
				romawi[j+1]='C';
				decimal=decimal-90;j=j+2;break;
			}
			if (decimal/50!=0){
				romawi[j]='L';
				decimal=decimal-50;j++;break;
			}
			if (decimal/40!=0){
				romawi[j]='X';
				romawi[j+1]='L';
				decimal=decimal-40;j=j+2;break;
			}
			if (decimal/10!=0){
				romawi[j]='X';
				decimal=decimal-10;j++;break;
			}
			if (decimal/9!=0){
				romawi[j]='I';
				romawi[j+1]='X';
				decimal=decimal-9;j=j+2;break;
			}
			if (decimal/5!=0){
				romawi[j]='V';
				decimal=decimal-5;j++;break;
			}
			if (decimal/4!=0){
				romawi[j]='I';
				romawi[j+1]='V';
				decimal=decimal-4;j=j+2;break;
			}
			if (decimal/1!=0){
				romawi[j]='I';
				decimal=decimal-1;j++;break;
			}
		}
	}
	j=j;
	for (i=0;i<j;i++){
		printf("%c", romawi[i]);
	}
	return 0;
}
