//program kelompok kotak//
#include <stdio.h>

int main(){
	int n=1; //jumlah kotak//
	int l, w, h, i; //panjang, lebar, tinggi, kotak ke-i//
	int vol; //volume masing-masing kotak//
	int counter;
	counter=i;
	printf("Masukkan banyaknya kotak: \n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		counter=i+1;
		printf("\nMasukkan panjang, lebar, dan tinggi kotak: \n");
		scanf("%d %d %d", &l, &w, &h);
		if(h<41){
			vol = l*w*h;
			printf("Volume kotak adalah: %d", vol);
		}
		else{
			printf("Kotaknya tidak muat :(");
		}
	}
}
