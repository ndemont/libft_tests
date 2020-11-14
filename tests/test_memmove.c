#include "libft_tests.h"
#include <string.h>
#include <stdio.h>
#include <signal.h>

int		test_memmove()
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
	char empty2[2] = "";
	char ft_empty2[2] = "";
	char *thirty_a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\0";
	char *ten_a = "aaaaaaaaaa\0";
	char testdst[10] = "abcdefghi\0";
	char ft_testdst[10] = "abcdefghi\0";
	char *testsrc = testdst + 2;
	char *ft_testsrc = ft_testdst + 2;
	char testsrc1[10] = "abcdefghi\0";
	char ft_testsrc1[10] = "abcdefghi\0";
	char *testdst1 = testsrc1 + 2;
	char *ft_testdst1 = ft_testsrc1 + 2;
	char testdst2[10] = "abcdefghi\0";
	char ft_testdst2[10] = "abcdefghi\0";
	char *testsrc2 = testdst2;
	char *ft_testsrc2 = ft_testdst2;

	memmove(nul1, 0, 20);
	ft_memmove(nul1, 0, 20);
	if (nul1)
	{
		printf(RED);
		printf("[KO] : Your memmove does not work with NULL dst and src\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memmove(twenty, ten_a, 1);
	ft_memmove(ft_twenty, ten_a, 1);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memmove does not work with n = 1\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memmove(twenty2, thirty_a, 19);
	ft_memmove(ft_twenty2, thirty_a, 19);
	if (strcmp(twenty2, ft_twenty2))
	{
		printf(RED);
		printf("[KO] : Your memmove does not work with len = strlen(dst)\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memmove(twenty3, thirty_a, 0);
	ft_memmove(ft_twenty3, thirty_a, 0);
	if (strcmp(twenty3, ft_twenty3))
	{
		printf(RED);
		printf("[KO] : Your memmove does not work with n = 0\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memmove(twenty, ten_a, 20);
	ft_memmove(ft_twenty, ten_a, 20);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memmove does not work with n > strlen(src)\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memmove(twenty, "", 10);
	ft_memmove(ft_twenty, "", 10);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memmove does not work with empty src\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memmove(empty, ten_a, 1);
	ft_memmove(ft_empty, ten_a, 1);
	if (strcmp(empty, ft_empty))
	{
		printf(RED);
		printf("[KO] : Your memmove does not work with dst = empty\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memmove(empty2, empty2, 1);
	ft_memmove(ft_empty2, ft_empty2, 1);
	if (strcmp(empty2, ft_empty2))
	{
		printf(RED);
		printf("[KO] : Your memmove does not work with null dst and src\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memmove(testdst, testsrc, 1);
	ft_memmove(ft_testdst, ft_testsrc, 1);
	if (strcmp(testdst, ft_testdst))
	{
		printf(RED);
		printf("[KO] : Your memmove does not work if srcs overlays dst\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memmove(testdst1, testsrc1, 5);
	ft_memmove(ft_testdst1, ft_testsrc1, 5);
	if (strcmp(testdst1, ft_testdst1))
	{
		printf(RED);
		printf("[KO] : Your memmove does not work if dst overlays src\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memmove(testdst2, testsrc2, 9);
	ft_memmove(ft_testdst2, ft_testsrc2, 9);
	if (strcmp(testdst2, ft_testdst2))
	{
		printf(RED);
		printf("[KO] : Your memmove does not work if dst = src\n");
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