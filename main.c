#include "libft_tests.h"
#include <stdio.h>

int		main()
{
	printf(BLUE);
	printf("\n%s\n", "TEST FOR MEMSET");
	printf(DEFAULT);
	test_memset();
	printf("\n");
	return (0);
}