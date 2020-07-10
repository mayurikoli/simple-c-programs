#include<stdio.h>
int main()
{
	int number, dig;
	scanf("%d",&number);
	while(number)
	{
		dig = number % 10;
		printf("%d",dig);
		number = number/10;
	} 
}