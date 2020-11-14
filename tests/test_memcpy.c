#include "libft_tests.h"
#include <string.h>
#include <stdio.h>
#include <signal.h>

int		test_memcpy()
{
	char *nul1 = 0;
	char twenty[20] = "0000000000000000000\0";
	char ft_twenty[20] = "0000000000000000000\0";
	char twenty2[20] = "0000000000000000000\0";
	char ft_twenty2[20] = "0000000000000000000\0";
	char twenty3[20] = "0000000000000000000\0";
	char ft_twenty3[20] = "0000000000000000000\0";
	char empty[2] = "";
	char ft_empty[2] = "";
	char *thirty_a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\0";
	char *ten_a = "aaaaaaaaaa\0";

	memcpy(nul1, 0, 20);
	ft_memcpy(nul1, 0, 20);
	if (nul1)
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with NULL dst and src\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memcpy(twenty, ten_a, 1);
	ft_memcpy(ft_twenty, ten_a, 1);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with n = 1\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memcpy(twenty2, thirty_a, 19);
	ft_memcpy(ft_twenty2, thirty_a, 19);
	if (strcmp(twenty2, ft_twenty2))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with len = strlen(dst)\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memcpy(twenty3, thirty_a, 0);
	ft_memcpy(ft_twenty3, thirty_a, 0);
	if (strcmp(twenty3, ft_twenty3))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with n = 0\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memcpy(twenty, ten_a, 20);
	ft_memcpy(ft_twenty, ten_a, 20);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with n > strlen(src)\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memcpy(twenty, "", 10);
	ft_memcpy(ft_twenty, "", 10);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with empty src\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memcpy(empty, ten_a, 1);
	ft_memcpy(ft_empty, ten_a, 1);
	if (strcmp(empty, ft_empty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with dst = empty\n");
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
