#include <stdlib.h>

static int a;
extern int b;
extern void ext();

void bar(void)
{
	a = 1;
	b = 2;
}

void foo()
{
	bar();
	ext();
}
