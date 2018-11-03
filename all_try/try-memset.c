#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
 {
 	unsigned char *tab; 

	if(n == 0)
		return (s); 
	tab = (unsigned char *) s;
 	while (n--)
 	{
 		*tab = (unsigned char)c;
 		tab++;
 	}
 	return (s);
 }



int main()
{
	char s[]="coucou";
	char q[]="coucou";
	char *j;

	j = memset(s, 42, 2);
	printf("%s\n", j);
	j = ft_memset(q, 42, 2);
	printf("%s\n", q);
	return(0);

}