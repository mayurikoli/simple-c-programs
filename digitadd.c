#include<stdio.h>
int main()
{
	int number, dig, add = 0;
	scanf("%d", &number);
	while(number>0)
	{
		
		dig = number % 10;
		add = add + dig;
		number = number / 10;
	}
	printf("%d\n", add );
}