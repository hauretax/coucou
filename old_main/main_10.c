#include <stdio.h>
void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
void	ft_print_words_tables(char **tab);
int		*ft_map(int *tab, int length, int (*f)(int));
int 	ft_is_sort(int *tab, int length, int (*f)(int, int));
void	ft_sort_wordtab(char **tab);
int		ft_strcmp(char *s1, char *s2);


int			f_strcm(int s1, int s2)
{
	int		i;

	i = 0;
	return (s1 - s2);
}

int 		f_f(int nb)
{
	return(-nb);
}

int		ft_st(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] == s2[i] && s1[i])
		i++;
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (0);
	else
		return (0);
}

int main(int argc, char **argv)
{
//	ft_advanced_sort_wordtab(argv, *ft_st);
//	ft_print_words_tables(argv);
	int tab[5] = {1,2,3,5,1};
//	int *tabb;
//	int i;
	argc = 1;

	tabb = ft_advanced_sort_wortdtab(tab, 5, *ft_st);
//	i = 0;
//	while(i < 5)
//	{
//		printf("%d\n",tab[i]);
//		printf("%d\n",tabb[i]);
//		i++;
//	}
//	printf("%d\n",ft_is_sort(tab, 5, *f_strcm));

//	ft_sort_wordtab(argv);	
//	ft_print_words_tables(argv);

	return (0);
}
