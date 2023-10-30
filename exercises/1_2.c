#include <stdio.h>

int main()
{
	int c, bc;

	bc = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++bc;
		else
			bc = 0;

		/* check if there is more than one space */
		if (bc <= 1)
			putchar(c);
	}
}
