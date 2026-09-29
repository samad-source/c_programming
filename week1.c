#include <stdio.h>

int main(){
	float num1 ;
	float num2;
	float result;
	printf("enter num1\n");
	scanf("%f",&num1);
	printf("enter num2\n");
	scanf("%f",&num2);
	result = num1 + num2;
	printf("the result of %f and %f = %f\n",num1,num2,result); 
	return 0;

}
