#include<stdio.h>
float mul(float number, float number1);
int main()
{
	float number, number1, result;
	scanf("%f %f",&number, &number1);
	
	printf("%f\n", mul(number, number1));

	return 0;
}
float mul(float number, float number1)
{
	return number * number1;
}