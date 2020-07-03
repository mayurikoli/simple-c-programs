#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int number1, number2, result;
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	result = ((number1 + number2) + abs(number1 - number2)) / 2;
	printf("%d\n", result);
	return 0;
}

