#include <stdio.h>
#include <unistd.h>
#include <string.h>
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int 	ft_str_is_alpha(char *str);
int		ft_str_is_alpha(char *str);
char	*ft_strcat(char * dest, char  *src);
char	*ft_strncat(char * dest, char  *src, int nb);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putnbr_base(int nbr, char *base);
	
int 	main()
{
	char s1[] = "BRHOUAHAHA";
	char s2[] = "chuuut";
	ft_putstr(ft_strcpy(s1, s2));

	ft_putchar('\n');
	ft_putchar('\n');

	char x[] = "BRHUUU";
	char c[] = "chuut";
	ft_putstr(ft_strncpy(x, c, 4));
	ft_putchar('\n');
	char dc[] = "BRHUUU";
	char cd[] = "chuut";
	ft_putstr(strncpy(dc, cd, 4));


	ft_putchar('\n');
	ft_putchar('\n');

	char *f = "je te disait que a oui j ai bien manger";
	char *g = "manger";
	printf("%s\n", ft_strstr(f, g));
	ft_putchar('\n');

	char *u = "";
	char *y = "asd";
	printf("%d\n",ft_strcmp(u, y));
	ft_putchar('\n');

	char *l = "asdv";
	char *k = "asfv";
	printf("%d\n",ft_strncmp(l, k, 3));
	ft_putchar('\n');

	char qwe[] = "A55s,  dqwFAD";
	printf("%s\n", ft_strupcase(qwe));
	ft_putchar('\n');

	char lel[] = "WFADFasdWaf";
	printf("%s\n", ft_strlowcase(lel));
	ft_putchar('\n');

	char we[] = " ADFASD Coucou. des bisoux, awai -dgs";
	printf("%s\n", ft_strcapitalize(we));
	ft_putchar('\n');
	
	char ew[] = "wq4egsdgd";
	printf("%d\n", ft_str_is_alpha(ew));
	ft_putchar('\n');

	char fg[] = "abcde";
	char fh[] = "fgh";
	printf("%s\n", ft_strcat(fg, fh));
	ft_putchar('\n');

	char hg[] = "0";
	char ff[] = "123456";
	printf("%s\n", ft_strncat(hg, ff, 5));
	ft_putchar('\n');

	char lal[100] = "abcd";
	char lol[100] = "efghi";
	printf("%lu\n", strlcat(lal,lol, 12));
	printf("%s\n", lal);
	ft_putchar('\n');
	ft_putchar(':');
	char hj[100] = "abcd";
	char er[100] = "efghi";
	printf("%u\n", ft_strlcat(hj, er, 12));
	printf("%s\n", hj);
	printf("\n");

	char gg[100] = "wrhdfb";
	char ii[100] = "abcd";	
	printf("%lu\n", strlcpy(gg,ii, 10));
	printf("%s\n", gg);
	char yy[100] = "dbbdfsgw";
	char oo[100] = "abcd";
	printf("%u\n", ft_strlcpy(yy,oo, 10));
	printf("%s\n", yy);
	printf("\n");

	ft_putnbr_base(465, "0123456789ABCDEF");










		return (0);
}
