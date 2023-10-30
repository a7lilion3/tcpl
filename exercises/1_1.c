#include <stdio.h>

int main()
{
	int c, bc, tc, nc;

	bc = tc = nc = 0;
	while ((c = getchar()) != EOF)
		if (c == ' ')
			++bc;
		else if (c == '\t')
			++tc;
		else if (c == '\n')
			++nc;
	printf("\\b: %d, \\t: %d, \\n: %d\n", bc, tc, nc);
}
