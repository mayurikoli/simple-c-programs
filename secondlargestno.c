#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
	int limit,max1,max2;
	scanf("%d",&limit);
	int arr[limit];
	for (int i = 0; i < limit; ++i)
	{
		scanf("%d",&arr[i]);
	}
	max1 = arr[0];
	max2 = arr[0];
	for (int i = 0; i < limit; i++)
	{
		if(max1<arr[i])
		{
			

				max2 = max1;
				max1 = arr[i];
		}
			else
				if(arr[i]>max2)
				{
					max2 = arr[i];
				}
				
			
			
		
	}
	printf("%d\n", max2);
}