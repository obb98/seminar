#include <stdio.h>

int main(){
int str,flo;
	int i = 7;
	char c[] = "10";
float f = 3.0;

str = atoi(&c);
flo = f;
printf("%d\n",str + flo + i);

}
