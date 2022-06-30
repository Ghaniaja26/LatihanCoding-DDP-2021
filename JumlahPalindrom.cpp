#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
	int i,j=0,k;
	int jumlah=0;
	char kalimat [10000];
	char kata [200];
	bool palindrome = true;
	int mid;
	
	scanf("%[^\n]", kalimat);
	for (i=0 ; i < strlen (kalimat); i++){
		if (kalimat[i] != ' '){
			kata[j]=kalimat[i];
			j++;
		}
		if (kalimat[i] == ' ' || kalimat[i+1]==0){
			for (k=0; k<j; k++){
				mid = (0+j)/2;
				if (j % 2 == 0){
					if (kata[k]!=kata[j-k-1]){
					palindrome = false;
					break;
					}
				}
				if (j % 2 != 0){
					if (kata[k]!=kata[j-k-1] && k!=mid){
					palindrome = false;
					break;
					}
				}
			}
		if (palindrome == true){
			jumlah++;
		}
		j=0;
		palindrome = true;
		}
	}
	printf("%d", jumlah);
	return 0;
}
