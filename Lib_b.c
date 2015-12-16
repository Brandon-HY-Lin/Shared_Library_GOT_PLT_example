#include <stdio.h>

int b;

void ext (void)
{
	b = 0;
	printf("Calling from %s: %s\n", __FILE__, __func__);
}
