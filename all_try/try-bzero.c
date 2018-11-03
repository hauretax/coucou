#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char *t;

	if(s == NULL)
		return ;
	t = (char*)s;
	while(n--)
	{
		*t = '\0';
		t++;
	}
}

int main()
{
	char s[] = "yoeee";
	char s2[] = "yoeee";
	int i;

	i = 0;
	bzero(s, 3);
	while(i < 5)
	{
		printf("%c\n",s[i]);
		i++;
	}
	ft_bzero(s2 , 3);
	i = 0;
	while(i < 5)
	{
		printf("%c\n", s2[i]);
		i++;
	}
	return (0);
}