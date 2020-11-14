#include "libft_tests.h"
#include <stdio.h>

int		main()
{
	printf(BLUE);
	printf("\n%s\n", "TEST FOR MEMSET");
	printf(DEFAULT);
	test_memset();
	printf("\n");

	printf(BLUE);
	printf("%s\n", "TEST FOR BZERO");
	printf(DEFAULT);
	test_bzero();
	printf("\n");

	printf(BLUE);
	printf("%s\n", "TEST FOR MEMCPY");
	printf(DEFAULT);
	test_memcpy();
	printf("\n");

	printf(BLUE);
	printf("%s\n", "TEST FOR MEMCCPY");
	printf(DEFAULT);
	test_memccpy();
	printf("\n");

	printf(BLUE);
	printf("%s\n", "TEST FOR MEMMOVE");
	printf(DEFAULT);
	test_memmove();
	printf("\n");

	return (0);
}
