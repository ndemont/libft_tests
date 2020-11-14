#include "libft_tests.h"

void	term_handle(int sig)
{
	(void)sig;
	longjmp(reset, 1);
}
