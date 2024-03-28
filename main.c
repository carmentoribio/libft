#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>

int main()
{
	//------------------------------- isalpha
	printf("TEST ft_isalpha()\n");
	
	char c = '3';
	
	if (isalpha(c) == ft_isalpha(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//-------------------------------- isdigit
	printf("TEST ft_isdigit()\n");
	
	c = '3';
	
	if (isdigit(c) == ft_isdigit(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");
	
	//-------------------------------- isalnum
	printf("TEST ft_isalnum()\n");
	
	c = '\0';
	
	if (isalnum(c) == ft_isalnum(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//------------------------------- isascii
	printf("TEST ft_isascii()\n");
	
	c = '\200';
	
	if (isascii(c) == ft_isascii(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//------------------------------ isprint
	printf("TEST ft_isprint()\n");
	
	c = '~';
	
	if (isprint(c) == ft_isprint(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//------------------------------ strlen
	printf("TEST ft_strlen()\n");
	
	char* str = "1234\0abcd";

	if (strlen(str) == ft_strlen(str))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//------------------------------ memset
	printf("TEST ft_memset()\n");	

	char *dest1 = (char *) malloc(11);
	char *dest2 = (char *) malloc(11);

	memset(dest1, 'A', 12);
	ft_memset(dest2, 'A', 12);

	printf("\tDest1: %s\n", dest1);
	printf("\tDest2: %s\n", dest2);
	
	free(dest1);
	free(dest2);
}
