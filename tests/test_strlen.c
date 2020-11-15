#include "libft_tests.h"

//Maybe add a chain with no \0 at the end ???

int		test_strlen_catch_segv(void)
{
	char *ptr;

	ptr = 0;
	if (setjmp(reset) != 0)
	{
		printf(GREEN);
		printf("[OK] (Segmentation fault)\n");
		printf(DEFAULT);
		return (1);
	}
	signal(SIGSEGV, term_handle);
	ft_strlen(ptr);
	printf(RED);
	printf("[KO] : your memccpy does not segfault with a poiter equals to zero\n");
	printf(DEFAULT);
	return (0);
}

int		test_strlen_basics(void)
{
	char *s1 = "\0";
	if (strlen(s1) != ft_strlen(s1))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);

	char *s2 = "Test written by ndemont, aleconte && nboisde\0";
	if (strlen(s2) != ft_strlen(s2))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);

	return (1);
}

int		test_strlen(void)
{
	test_strlen_catch_segv();
	test_strlen_basics();
	return (8);
}