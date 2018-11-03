#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest,const void *src, size_t n)
{
	unsigned char *mem;
	unsigned char *tmp;

	mem = (unsigned char *)src;
	tmp = (unsigned char *)dest;
	if(n == 0 || dest == src)
		return (dest);
	while (n--)
	{
		tmp[n] = mem[n];
	}
	return (tmp);
}

int main()
{
	char s[]= "coucou";
	char s1[] = "yopopopo";
	char *s2;

	s2 = memcpy(s1, s, 3);
	printf("%s\n",s);
	printf("%s\n",s1);
	printf("%s\n",s2);
	char d[]= "coucou";
	char d1[] = "yopopopo";
	char *d2;
	d2 = ft_memcpy(d1,d,3);
	printf("%s\n",d);
	printf("%s\n",d1);
	printf("%s\n",d2);


}		