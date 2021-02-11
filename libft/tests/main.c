#include <stdio.h>
#include "libft.h"

int  main()
{
    char src[] = "test basic du memccpy !";
	char buff1[22];
    char *out = ft_memccpy(buff1, src, 'm', 22);
    printf("src: %s\n", src);
    printf("buf: %s\n", buff1);
    printf("out: %s\n", out);
}