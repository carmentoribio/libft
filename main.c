#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>

int	main()
{
	//------------------------------- isalpha
	printf("TEST ft_isalpha()\n");

	char c = '3';

	if ((isalpha(c) == 0 && ft_isalpha(c) == 0) || (isalpha(c) != 0 && ft_isalpha(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");
	
	c = 'a';

	if ((isalpha(c) == 0 && ft_isalpha(c) == 0) || (isalpha(c) != 0 && ft_isalpha(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	c = '\0';

	if ((isalpha(c) == 0 && ft_isalpha(c) == 0) || (isalpha(c) != 0 && ft_isalpha(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//-------------------------------- isdigit
	printf("TEST ft_isdigit()\n");
	
	c = '3';

	if ((isdigit(c) == 0 && ft_isdigit(c) == 0) || (isdigit(c) != 0 && ft_isdigit(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");


	c = '~';

	if ((isdigit(c) == 0 && ft_isdigit(c) == 0) || (isdigit(c) != 0 && ft_isdigit(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");


	c = '\0';

	if ((isdigit(c) == 0 && ft_isdigit(c) == 0) || (isdigit(c) != 0 && ft_isdigit(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//-------------------------------- isalnum
	printf("TEST ft_isalnum()\n");
	
	c = '\0';
	
	if ((isalnum(c) == 0 && ft_isalnum(c) == 0) || (isalnum(c) != 0 && ft_isalnum(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	c = 'A';
	
	if ((isalnum(c) == 0 && ft_isalnum(c) == 0) || (isalnum(c) != 0 && ft_isalnum(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	c = '~';
	
	if ((isalnum(c) == 0 && ft_isalnum(c) == 0) || (isalnum(c) != 0 && ft_isalnum(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//------------------------------- isascii
	printf("TEST ft_isascii()\n");
	
	c = '\200';
	
	if ((isascii(c) == 0 && ft_isascii(c) == 0) || (isascii(c) != 0 && ft_isascii(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	c = '\0';
	
	if ((isascii(c) == 0 && ft_isascii(c) == 0) || (isascii(c) != 0 && ft_isascii(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	c = '~';
	
	if ((isascii(c) == 0 && ft_isascii(c) == 0) || (isascii(c) != 0 && ft_isascii(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//------------------------------ isprint
	printf("TEST ft_isprint()\n");
	
	c = '~';

	if ((isprint(c) == 0 && ft_isprint(c) == 0) || (isprint(c) != 0 && ft_isprint(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	c = ';';

	if ((isprint(c) == 0 && ft_isprint(c) == 0) || (isprint(c) != 0 && ft_isprint(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	c = '\t';

	if ((isprint(c) == 0 && ft_isprint(c) == 0) || (isprint(c) != 0 && ft_isprint(c) != 0))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//------------------------------ strlen
	printf("TEST ft_strlen()\n");
	
	char* str = "1234\0abcd";

	printf("\tstrlen : %ld\n\tft_strlen : %ld", strlen(str), ft_strlen(str));
	if (strlen(str) == ft_strlen(str))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");
	
	str = "1234abcd";

	printf("\tstrlen : %ld\n\tft_strlen : %ld", strlen(str), ft_strlen(str));
	if (strlen(str) == ft_strlen(str))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	//------------------------------ memset
	printf("TEST ft_memset()\n");	

	char *dest1 = (char *) malloc(11);
	char *dest2 = (char *) malloc(11);

	memset(dest1, 'A', 15);
	ft_memset(dest2, 'B', 15);

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

	memcpy(d1, src, 4);
	ft_memcpy(d2, src, 4);

	printf("\tmemcpy: %s\n\tft_memcpy: %s\n", d1, d2);

	//------------------------------ memmove
	printf("TEST ft_memmove()\n");
	
	char csrc[20] = "HolaQueTal";
	ft_memmove(csrc+4, csrc, strlen(csrc)+1);
	
	printf("\t%s\n", csrc);
	
	//------------------------------ strlcpy
	printf("TEST ft_strlcpy()\n");
	
	const char *src2 = "holaa\0";
	char lcpy[10] = "0123456789";

	printf("\tlen = %ld\n\t%s\n", ft_strlcpy(lcpy, src2, 9), lcpy);

	//------------------------------ strlcat
	printf("TEST ft_strlcat()\n");
	
	char *lcat = (char *)malloc(6);
	lcat = strdup("12345");

	printf("\tlen = %ld\n\t%s\n", ft_strlcat(lcat, src2, 3), lcat);
	free(lcat);
	
	//------------------------------ toupper
	printf("TEST ft_toupper()\n");

	c = 'a';

	if (toupper(c) == ft_toupper(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n")
			;
	c = '\0';

	if (toupper(c) == ft_toupper(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	c = '~';

	if (toupper(c) == ft_toupper(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");
	//------------------------------ tolower
	printf("TEST ft_tolower()\n");

	c = 'Q';

	if (toupper(c) == ft_toupper(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n")
			;
	c = '\0';

	if (toupper(c) == ft_toupper(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");

	c = '|';

	if (toupper(c) == ft_toupper(c))
		printf("\tOK✅\n");
	else
		printf("\tERROR❌\n");
	/*//------------------------------- strchr
	printf("TEST ft_memmove()\n");
	//------------------------------ strrchr
	printf("TEST ft_memmove()\n");
	//------------------------------ strncmp
	printf("TEST ft_memmove()\n");*/
}
