#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);
char	**ft_split_whitespaces(char *str);
void	ft_putchar(char c);
void	ft_print_words_tables(char **tab);

int main(int argc, char **argv)
{
	printf("%s\n", strdup("dsgdb"));
	printf("%s\n", ft_strdup("dsgdb"));

	int i;
	i = 0;
	int *tab ;
   	tab = ft_range(1, 6);
	while(i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("\n");

	i = 0;
	int *bat;
	int min = 7;
	int max = 25;
	ft_ultimate_range(&bat, min, max);
	printf("----- Je suis ICI -----\n");
	while (i < max - min && max - min > 0)
	{
		printf("%d\n", bat[i]);
		i++;
	}		

	printf("i\n");
	printf("%s\n",ft_concat_params(argc, argv));
	printf(":\n");
	ft_print_words_tables(ft_split_whitespaces(" afi we gwr fh r yw  af"));

	return(0);
}
