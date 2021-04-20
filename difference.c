#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10],limit,max=0,diff;
	scanf("%d",&limit);
	for(int i = 0;i<limit;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < limit-1; ++i)
	{
		diff=arr[i]-arr[i+1];

		if(diff>max)
		{
			max=diff;
		}

	}
	printf("%d\n",max );
}