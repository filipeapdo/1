#include <stdio.h>

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	printf("\n\nargv = %d\n", argc);
	while (i < argc)
	{
		printf("argv[%d] = %s", i, *(argv + i));
		i++;
	}
	printf("\n\n");
	return (0);
}
