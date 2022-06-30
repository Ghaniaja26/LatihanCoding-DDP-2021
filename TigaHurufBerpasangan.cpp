#include <stdio.h>

int main() {
	/* Kamus data */
	char X[10] = "JTKPolban";
    int i;
    char huruf1;
    char huruf2;
    int posisi1=0;
    int posisi2=0;
    
	/* Algoritma */
	scanf("%c %c", &huruf1,&huruf2);
	for (i=0;i<10;i++){
		if (X[i]==huruf1 || X[i]==huruf1+32 || X[i]==huruf1-32){
			posisi1=i;break;
		}
	}
	for (i=0;i<10;i++){
		if (X[i]==huruf2 || X[i]==huruf2+32 || X[i]==huruf2-32){
			posisi2=i;break;
		}
	}
	if (posisi1 - posisi2==1 || posisi2 - posisi1==1){
		if (posisi1>posisi2 && posisi1 !=0 && posisi2!=0){
			printf("ada");
		} 	else if (posisi1<posisi2 && posisi1 !=0 && posisi2!=0){
			printf("tidak ada");
		}
	} else {
		printf("tidak ada");
	}
	if (posisi1==0 || posisi2==0){
		printf("tidak ada");
	}
	return 0;
}
