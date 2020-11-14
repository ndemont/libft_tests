#include "libft_tests.h"

//#include <string.h>
//#include <stdio.h>

//jmp_buf reset3;

//void	term_handle(int sig)
//{
//	(void)sig;
//	longjmp(reset, 1);
//}

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

int		test_memccpy(void)
{
	test_memccpy_catch_sigbus();
	test_memccpy_catch_segv();
	return (3);
}
