#include<stdio.h>
#include<math.h>
int main()
{
	int number,ct=0;
	scanf("%d", &number);
	for(int i = 2; i< sqrt(number); i++)
	{
		if(number % i == 0)
		{
			printf("%d is not prime number\n", number );
			return 0;
		}
		
	}
	printf("%d is prime number\n", number );
}