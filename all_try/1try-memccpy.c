#include <string.h>
#include <stdio.h>

void *ft_memccpy(void *v1, const void *v2, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t		i;

	s1 = (unsigned char *) v1;
	s2 = (unsigned char *) v2;
	i = 0;
	while(i < n)
	{
		s1[i] = s2[i];
		if(s2[i] == (unsigned char)c)
		 return (v1 + i + 1);
		i++;
	}
	return (NULL);
}

int main()
{
	char s[]= "coursunpeupluslong";
	char s1[] = "alphabet";
	char *s2;

	s2 = memccpy(s1, s, 'o', 5);
	printf("%s\n",s);
	printf("%s\n",s1);
	printf("%s\n",s2);
	char d[]= "coursunpeupluslong";
	char d1[] = "alphabet";
	char *d2;
	d2 = ft_memccpy(d1 , d, 'o' ,5);
	printf("%s\n",d);
	printf("%s\n",d1);
	printf("%s\n",d2);
}