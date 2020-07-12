#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	int len, i = 0, len1;
	gets(st);
	len = strlen(st);
	while(i<len)
	{
		if(st[i] != st[len-1])
		{
			printf("string is not pallindrom \n" );
			return 0;
		}
		i++;
		len--;
	}
	printf("string is pallindrom\n"); 
	
}