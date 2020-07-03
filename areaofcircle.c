#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main(int argc, char * argv[])
{
	float radius, area;
	radius = atoi(argv[1]);
	area = PI * radius * radius;
	printf("%5.3f\n", area);
	return 0;
}

