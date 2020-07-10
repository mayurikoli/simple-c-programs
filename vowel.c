#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	gets(st);
	int len, ct1 = 0, ct2 = 0;
	len = strlen(st);
	for(int i = 0;i < len;i++)
	{


		if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' || st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
		{
			ct1++;
		}
		else
		{
			ct2++;
		}
	}
	printf(" no of vowels : %d  no of conconent : %d \n", ct1, ct2);
}	