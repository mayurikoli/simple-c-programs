#include<stdio.h>
#include<stdlib.h>
int isPeime(int no)
{
	for (int i = 2; i <= no/2; ++i)
	{
		if(no%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int start,end,sum = 0;
	scanf("%d %d",&start,&end);
	for (int i = start; i <= end; ++i)
	{
		if(isPeime(i))
		{
			sum = sum + i;
		}
	}
	printf("%d\n",sum );
	return 0;
}