#include <stdio.h>

int main(){
	int n = 0;
	int sum = 0;
	while (sum < 1000) {
		n = n +1;
		sum = sum + n;
		//printf("n=%d,sum=%d\n",n,sum);
	}
	printf("1+2+3+...+%d=%d<1000\n",n -1 ,sum - n);
	printf("1+2+3+...+%d=%d>1000\n",n,sum);
	printf("n = %d\n",n - 1);
}
