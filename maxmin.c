#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	char *a = argv[1];
	int l = strlen(a),j=0,b[100];
	for (int i = 1; i < argc; ++i)
	{
		b[j]=atoi(argv[i]);
		j++;
	}
	for (int i = 0; i < j-1; ++i)
	{
		for (int k = 0; k < j-i-1; ++k)
		{
			if(b[k]>b[k+1])
			{
				int temp = b[k];
				b[k] = b[k+1];
				b[k+1] = temp;
			}
		}
	}

	/*for (int i = 0; i < j; ++i)
	{
		printf("%d ", b[i]);
	}*/
	printf("%d %d\n",b[0],b[j-1] );
	return 0;
}