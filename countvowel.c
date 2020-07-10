#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	gets(st);
	int len, at=0, et=0 ,it=0, ot=0, ut=0;
	len = strlen(st);
	for(int i = 0; i<len ;i++)
	{
		if(st[i] == 'a')
		{
			at++;
		}
		else if(st[i] == 'e')
		{
			et++;
		}
		else if(st[i] == 'i')
		{
			it++;
		}
		else if(st[i] == 'o')
		{
			ot++;
		}
		else if(st[i] == 'u')
		{
			ut++;
		}

	}
	int t = at + et + it + ot + ut;
	printf(" no of a = %d\n no of e = %d\n no of i = %d\n no of o = %d\n no of u = %d\n", at,et,it,ot,ut);

}