//#include "libft_tests.h"
#include <string.h>
#include <stdio.h>
/*
int		test_memchr_segv(void)
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
	memchr(ptr, 'a', 9);
	printf(RED);
	printf("[KO] : Your bzero does not segmentation fault for a pointers equals to zero\n");
	printf(DEFAULT);
	return (0);
}
*/
int		test_memchr_basics(void)
{
	char *s1 = "";
	if (memchr(s1, 'a', 9) != memchr(s1, 'a', 9))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
	char *s2 = "hello";
	if (memchr(s2, 'a', 9) != memchr(s2, 'a', 9))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
	char *s3 = "hello";
	if (memchr(s3, 'a', 2) != memchr(s3, 'a', 2))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
	char *s4 = "hello";
	if (memchr(s4, 'l', 9) != memchr(s4, 'l', 9))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
	char *s5 = "hello";
	if (memchr(s5, 'l', 2) != memchr(s5, 'l', 2))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
	char *s6 = "hello";
	if (memchr(s6, 'l', 3) != memchr(s6, 'l', 3))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);

	char *s7 = "";
	if (memchr(s7, 'a', 9) != memchr(s7, 'a', 9))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	
	char *s8 = "";
	if (memchr(s8, 'a', 9) != memchr(s8, 'a', 9))
		printf("%s%s%s", RED, "[KO] : Your memccpy does not work with basic input\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	return(1);
}

int		test_memchr(void)
{
	//test_memchr_segv();
	test_memchr_basics();
	return (5);
}

int		main(void)
{
	test_memchr();
}