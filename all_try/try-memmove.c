#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src , size_t n)
{
	unsigned char *sd;
	unsigned char *ss;

	if(n == 0)
		return(dest);
	sd = (unsigned char *)dest;
	ss = (unsigned char *)src;
	while (n--)
		sd[n] = ss[n];
	return(dest);
}

int main()
{
	char s1[] = "coucou";
	char s2[] = "cestxiquonmodifi";
	char *s;

	s = memmove(s2, s1, 4);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s);
	char d1[] = "coucou";
	char d2[] = "cestxiquonmodifi";
	char *d;
	d = ft_memmove(d2, d1, 4);
	printf("%s\n", d1);
	printf("%s\n", d2);
	printf("%s\n", d);
	return(0);
}