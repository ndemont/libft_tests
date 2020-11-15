#include "libft_tests.h"

int		test_memccpy_catch_sigbus(void)
{
	char *s1 = "";
	char *src = "hello\0";

	if (setjmp(reset) != 0)
	{
		printf(GREEN);
		printf("[OK] (Bus Error)\n");
		printf(DEFAULT);
		return (1);
	}
	signal(SIGBUS, term_handle);
	ft_memccpy(s1, src, 'l', 3);
	printf(RED);
	printf("[KO] : does not Bus error with a non modifiable char *\n");
	printf(DEFAULT);
	return (0);
}

int		test_memccpy_catch_segv(void)
{
	char *ptr;
	char *src = "hello\0";

	ptr = 0;
	if (setjmp(reset) != 0)
	{
		printf(GREEN);
		printf("[OK] (Segmentation fault)\n");
		printf(DEFAULT);
		return (1);
	}
	signal(SIGSEGV, term_handle);
	ft_memccpy(ptr, src, 'h', 3);
	printf(RED);
	printf("[KO] : your memccpy does not segfault with a poiter equals to zero\n");
	printf(DEFAULT);
	return (0);
}

int		test_memccpy_regular(void)
{
	char twenty[20] = "0000000000000000000\0";
	char ft_twenty[20] = "0000000000000000000\0";
	memccpy(twenty, "hello", 'l', 3);
	ft_memccpy(ft_twenty, "hello", 'l', 3);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memccpy does not work with basic input\n");
		printf(DEFAULT);
	}
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);

	char fts1[4] = "000\0";
	char s1[4] = "000\0";
	memccpy(s1, "hello", 'l', 3);
	ft_memccpy(fts1, "hello", 'l', 3);
	if (strcmp(s1, fts1))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
	char fts2[4] = "000\0";
	char s2[4] = "000\0";
	memccpy(s2, "hello", 'a', 3);
	ft_memccpy(fts2, "hello", 'a', 3);
	if (strcmp(s2, fts2))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);

	char fts3[6] = "00000\0";
	char s3[6] = "00000\0";
	memccpy(s3, "hello", 'e', 5);
	ft_memccpy(fts3, "hello", 'e', 5);
	if (strcmp(s3, fts3))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
	char fts4[10] = "000000000\0";
	char s4[10] = "000000000\0";
	memccpy(s4, "hello", 'q', 4);
	ft_memccpy(fts4, "hello", 'q', 4);
	if (strcmp(s4, fts4))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
	char fts5[10] = "000000000\0";
	char s5[10] = "000000000\0";
	memccpy(s5, "hello", 'q', 9);
	ft_memccpy(fts5, "hello", 'q', 9);
	if (strcmp(s5, fts5))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
	char fts6[10] = "000000000\0";
	char s6[10] = "000000000\0";
	memccpy(s6, "hello", 'q', 0);
	ft_memccpy(fts5, "hello", 'q', 0);
	if (strcmp(s6, fts6))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
		char fts7[10] = "000000000\0";
	char s7[10] = "000000000\0";
	memccpy(s7, "hello", 'l', 0);
	ft_memccpy(fts5, "hello", 'l', 0);
	if (strcmp(s7, fts7))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	return (1);
}

int		test_memccpy(void)
{
	test_memccpy_catch_sigbus();
	test_memccpy_catch_segv();
	test_memccpy_regular();
	return (3);
}
