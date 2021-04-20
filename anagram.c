#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char a[100];
	fgets(a,100,stdin);
	//printf("%s\n",a );
	int arr[25],c,sum;
	for (int i = 0; i < strlen(a); ++i)
	{
		c = a[i];
		if(c>=97 && c<=122)
		{
			sum = c-96;
			arr[sum-1] = 1;
		}
		else
		{
			sum = c-64;
			arr[sum-1] = 1;
		}
	}
	for (int i = 0; i < 25; ++i)
	{
		if(arr[i]!=1)
		{
			printf("not anagram\n");
			return 0;
		}
		
	}
	printf("anagram\n");

	return 0;
}