#include "libft_tests.h"
#include <ctype.h>

int		test_tolower()
{
	char *str = "\0\n\31 AzaZ~\127";
	int i;

	i = 0;
	while (i < 10)
	{
		if (tolower(str[i]) != ft_tolower(str[i]))
		{
			printf(RED);
			printf("[K0] : ");
			if (str[i] == 0)
				printf("Your tolower does not work for c = \\0\n");
			else if (str[i] >= 'A' && str[i] <= 'Z')
				printf("Your tolower does not work for uppercase letters");
			else if (str[i] >= 'a' && str[i] <= 'z')
				printf("Your tolower does not work for lowercase letters");
			else if (str[i] < 32 || str[i] == 127)
				printf("Your tolower does not work for non printable characters\n");
			else if (str[i] > 127)
				printf("Your tolower does not work for extended ASCII characters\n");
			printf(DEFAULT);
		}
		else if (i % 2)
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		i++;
	}
	return (0);
}