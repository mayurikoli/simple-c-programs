#include<stdio.h>
int main()
{
	int number1, number2;
	scanf("%d %d", &number1, &number2);
	number1 = number1 ^ number2;
	number2 = number1 ^ number2;
	number1 = number1 ^ number2;
	printf("number1: %d number2: %d ", number1, number2);
}