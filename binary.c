#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int dig,count[100],i = 0;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = a + b;
	while(c)
	{
		dig = c % 2;
		count[i] = dig;
		c = c/2;
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		printf("%d",count[j]);
	}

}