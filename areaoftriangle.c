#include<stdlib.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
	float height, base, area;
	height = atoi(argv[1]);
	base = atoi(argv[2]);
	area = (height * base) / 2;
	printf("%.2f\n", area );
	return 0;
}

