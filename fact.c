#include<stdio.h>
int fact(int number);
int main()
{
	int number;
	scanf("%d", &number);
	printf("%d\n", fact(number));
}
int fact(int number)
{
	int ct = 1;
		if(number == 1)
		{
			return 1;
		}
		else
		{
			ct = ct * number * fact(number - 1);
		}
	
}