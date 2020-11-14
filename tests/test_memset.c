#include "libft_tests.h"
#include <string.h>
#include <stdio.h>
#include <signal.h>

int		test_memset()
{
	char twenty[20] = "0000000000000000000\0";
	char ft_twenty[20] = "0000000000000000000\0";

	memset(twenty, 65, 1);
	ft_memset(ft_twenty, 65, 1);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memset does not work for len = 1\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memset(twenty, 200, 5);
	ft_memset(ft_twenty, 200, 5);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memset does not work with ASCII extended\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memset(twenty, 65, 19);
	ft_memset(ft_twenty, 65, 19);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memset does not work for len = strlen(str)\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	return (0);
}
