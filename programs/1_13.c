#include <stdio.h>

int power(int x, int y);

int main()
{
	printf("%d\n", power(2, 5));
}

int power(int x, int y)
{
	int i, res;

	res = 1;
	for (i = 0; i < y; ++i)
	   res *= x;
	return res;	
}
