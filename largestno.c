#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int no = atoi(argv[1]);
	int no1 = atoi(argv[2]);
	no>no1?printf("%d\n",no):printf("%d\n", no1);
}