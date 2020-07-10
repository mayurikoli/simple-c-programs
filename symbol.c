#include<stdio.h>
int main()
{
	char st;
	scanf(" %c",&st);
	if(st >= 97 && st <= 122)
	{
		printf("%c is english character\n", st);
	}
	else
	{
		printf("%c is not english character\n", st);
	}
}