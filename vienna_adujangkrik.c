//program untuk adu jangkrik//
#include <stdio.h>

int main(){
	int x1, x2, v1, v2;
	printf("Masukkan x1, v1, x2, v2: \n");
	scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
if (x1<x2){
	if(v1>v2){
		while(x1<x2){
			x1 += v1;
			x2 += v2;
		}
	}
else if(x1>x2)
	if(v2>v1){
		while(x2<x1){
			x1 += v1;
			x2 += v2;
		}
	} 
if (x1==x2){
	printf("YES.\nJangkriknya ketemu di %d\n", x1);
	}
else printf("NO.\n Jangkriknya gak ketemu :(\n");
	}
}