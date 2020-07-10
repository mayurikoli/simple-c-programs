#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	//printf("%s\n",str);
	int key;
	int len = strlen(str);
	scanf("%d", &key);
	for( int i = 0; i<len; i++)
	{
		printf("%c", str[i]-key);
	}
	
    return 0;

}