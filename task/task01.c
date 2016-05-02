#include <stdio.h>

int main(){
	
	printf("Please input your height.(m)\n");
	float height,weight,bmi;
	scanf ("%f",&height);
	printf("Please input your body weight.(kg)\n");
	scanf ("%f",&weight);
	bmi = weight / (height * height);
	//printf("%fm,%fkg,%f\n",height,weight);
	printf("Your BMI is %f\n",bmi);
	
}
