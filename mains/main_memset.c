//#include "libft_tests.h"
#include <string.h>
#include <stdio.h>
#include <signal.h>

int		main()
{
	char twenty[20] = "0000000000000000000\0";
	char ft_twenty[20] = "000\0";

	memset(twenty, 65, 1);
	memset(ft_twenty, 65, 1);
	if (strcmp(twenty, ft_twenty))
	{
		printf("\033[1;31m");
		printf("[KO] : Your memset does not work for len = 1\n");
		printf("\033[1;31m");
	}
	else
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0;32m");
	}
	memset(twenty, 200, 5);
	memset(ft_twenty, 200, 5);
	if (strcmp(twenty, ft_twenty))
	{
		printf("\033[1;31m");
		printf("[KO] : Your memset does not work with ASCII extended\n");
		printf("\033[1;31m");
	}
	else 
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0;32m");
	}
	memset(twenty, 65, 19);
	memset(ft_twenty, 65, 19);
	if (strcmp(twenty, ft_twenty))
	{
		printf("\033[1;31m");
		printf("[KO] : Your memset does not work for len = strlen(str)\n");
		printf("\033[1;31m");
	}
	else
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0;32m");
	}
	return (0);
}