#include<stdio.h>
#include<math.h>
int main()
{
	int side1, side2; 
	float h, sq;
	scanf("%d %d", &side1, &side2);
	h = side1 * side1 + side2 * side2;
	sq = h / 2;
	int temp = 0;
	while(sq != temp)
	{
		temp = sq;
		sq = (h / temp + temp) / 2;
	}
	printf("area of triangle is :%f\n", sq);
	return 0;

}