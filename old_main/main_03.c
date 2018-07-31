#include <stdlib.h>
void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putnbr(int nb);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
char *ft_strrev(char *str);
int ft_atoi(char *str);
void ft_sort_integer_table(int *tab, int size);

int  main()
{
	int y;
	int c;

	c = 452;
	y = 10;	

	ft_putnbr(c);
	ft_putchar('\n');	
	ft_putnbr(y);
	ft_putchar('\n');
	ft_swap(&y ,&c);
	ft_putnbr(c);
	ft_putchar('\n');	
	ft_putnbr(y);
	ft_putchar('\n');
	ft_putchar('\n');

	c = 452;
	y = 10;
	ft_div_mod(c, y, &c, &y);
	ft_putnbr(c);
	ft_putchar('\n');	
	ft_putnbr(y);
	ft_putchar('\n');
	ft_putchar('\n');

	c = 452;
	y = 10;
	ft_ultimate_div_mod(&c, &y);
	ft_putnbr(c);
	ft_putchar('\n');
	ft_putnbr(y);
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr("sdlkvndoifbeajrpo");
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putnbr(ft_strlen("coucou"));
	ft_putchar('\n');
	
	char str[] = "salut";
	ft_putstr(ft_strrev(str));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putnbr(atoi("95 e "));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("95 e "));
	ft_putchar('\n');

	int tab[7] = {6,5,8,1,4,9,3};
	int i;
	int size;

	i = 0;
	size = 7;
	ft_sort_integer_table(tab, size);
	while(i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	ft_putchar('\n');

	ft_putnbr(-1);
 	return(0);
}
