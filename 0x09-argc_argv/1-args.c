#include <stdio.h>
#define UNUSED(argv) (void) (argv)

int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc);
	return (0);
}
