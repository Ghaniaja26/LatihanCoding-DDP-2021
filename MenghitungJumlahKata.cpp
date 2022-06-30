#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int jumlah=0;
	char kalimat [1000];
	
	scanf("%[^\n]", kalimat);
	for (i=0; i < strlen(kalimat); i++){
		if (kalimat[i]==' '){
			jumlah++;
		}
	}
	jumlah++;
	printf("%d", jumlah);
	return 0;
}
