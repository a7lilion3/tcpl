#include <stdio.h>

#define OUT	0
#define IN	1

int main()
{
	int c, nc, nl, nw, state;

	state = OUT;
	nc = nl = nw = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == '\n' || c == '\t' || c == ' ')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}

	printf("%d %d %d\n", nc, nw, nl);
}
