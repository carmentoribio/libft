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
	//printf("%d\n%d\n", isdigit(c), ft_isdigit(c));
	if (isdigit(c) != 0 && 0 != ft_isdigit(c))
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
	//printf("%d\n%d\n", isprint(c), ft_isprint(c));	
	if (isprint(c) > 0 && ft_isprint(c) > 0)
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
	
	//------------------------------ bzero
	printf("TEST ft_bzero()\n");	

	bzero(dest1, 7);
	ft_bzero(dest2, 7);

	printf("\tDest1: %s\n", dest1);
	printf("\tDest2: %s\n", dest2);
	
	free(dest1);
	free(dest2);

	//------------------------------ memcpy
	printf("TEST ft_memcpy()\n");

	char *src = (char *)malloc(10);
	src = strdup("0123456789");
	char *d1 = (char *)malloc(7);
	d1 = strdup("AAAAAAA");
	char *d2 = (char *)malloc(7);
	d2 = strdup("BBBBBBB");

	memcpy(d1, src, 10);
	ft_memcpy(d2, src, 10);

	printf("memcpy: %s\nft_memcpy: %s\n", d1, d2);

	//------------------------------ memmove
	printf("TEST ft_memmove()\n");
	char csrc[100] = "HolaQueTal";
	ft_memmove(csrc+4, csrc, strlen(csrc)+1);
	printf("%s\n", csrc);
	
	//------------------------------ memmove
	printf("TEST ft_memmove()\n");
	//------------------------------ memmove
	printf("TEST ft_memmove()\n");
	//------------------------------ memmove
	printf("TEST ft_memmove()\n");
	//------------------------------ memmove
	printf("TEST ft_memmove()\n");
	//------------------------------ memmove
	printf("TEST ft_memmove()\n");
	//------------------------------ memmove
	printf("TEST ft_memmove()\n");
	//------------------------------ memmove
	printf("TEST ft_memmove()\n");
}
