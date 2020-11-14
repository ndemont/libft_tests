//#include "libft_tests.h"

//to del.
#include <string.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <setjmp.h>

jmp_buf reset;

void	termination_handler(int signum)
{
	longjmp(reset, 1);
}

int		test_bzero()
{
	char *s1 = "\0";
	return (0);
}

int		main(void)
{
	char *s1 = "\0";
	char s2[3] = "333";
	char s2bis[3] = "333";
	char s3[6] = "";
	char s3bis[6] = "";
	bzero((char *)s3, 6);
	bzero((char *)s3bis, 6);
	bzero((char *)s2, 3);
	bzero(s2bis, 3);
	int i;
	i = 0;
	while (i < 3)
	{
		printf("%c", (char)(s2[i] + 48));
		i++;
	}
	i = 0;
	printf("\n");
	while (i < 3)
	{
		printf ("%c", (char)(s2bis[i] + 48));
		i++;
	}
	printf("\n");
	if (setjmp(reset) != 0)
	{
		printf("You have a bus error dumbass\n");
		goto line32;
		//continue ;
	}
	signal (SIGBUS, termination_handler);
	printf("task 1\n");
	printf("%s", (char*)bzero(s1, 2));
	line32: printf("task 2\n");
	return (0);
}
