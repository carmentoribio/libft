#include <stdio.h>
#include "libft.h"

int main()
{	
	printf("%d\n", ft_isalpha('3'));
	printf("%d\n", ft_isdigit('3'));
	printf("%d\n", ft_isalnum('\0'));
	printf("%d\n", ft_isascii('\200'));
	printf("%d\n", ft_isprint('\0'));

	printf("%zu\n", ft_strlen("1234\0abcd"));
}
