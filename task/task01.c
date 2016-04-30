#include <stdio.h>

int main(){
	
	printf("Please input your extension.(m)\n");
	double exten,weight,exten2,bmi;
	scanf ("%lf",&exten);
	printf("Please input your body weight.(kg)\n");
	scanf ("%lf",&weight);
	exten2 = exten * exten;
	bmi = weight / exten2;
	//printf("%lfm,%lfkg,%lf\n",exten,weight,exten2);
	printf("Your BMI is %lf\n",bmi);
	
}
