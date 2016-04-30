#include <stdio.h>

int main(){
	int i,n;
	
	for (n = 1; n < 10; n++) {
		
		for (i = 1; i < 10; i++) {
			printf("%3d",n * i);
		}
		printf("\n");
	}
}
