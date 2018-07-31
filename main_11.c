#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr((char *)list->data);
		list = list->next;
	}
}

void	print_elem(void *data)
{
		ft_putstr((char *)data);
}

int		ft_strcmp(char *str, char *str1)
{
	int i;

	i = 0;
	while(str[i] == str1[i] && str[i])
		i++;
	return(str[i] - str1[i]);
}

int main (int argc, char **argv)
{
	t_list *list;
	t_list *test;

	test = NULL;
	list = NULL;
	ft_putstr("------push_back----\n");
	ft_list_push_back(&list, (void *)"toto\n");
	ft_list_push_back(&list, (void *)"tata\n");
	ft_list_push_back(&list, (void *)"tutu\n");

	print_list(list);
	ft_putstr("------push_front----\n");
	ft_list_push_front(&list, (void *)"head\n");
	print_list(list);
	ft_putstr("------clear_list-----\n");
	print_list(test);
	printf("la!\n");
	ft_list_clear(&list);
	print_list(list);
	ft_putstr("------list_size-----\n");
	printf("%d\n", ft_list_size(list));
	ft_putstr("------list_last-----\n");
	print_list(ft_list_last(list));
	ft_putstr("------push_param----\n");
	print_list(ft_list_push_params(argc, argv));
	ft_putstr("\n------list_at-----\n");
	print_list(ft_list_at(ft_list_push_params(argc, argv), 0));
	ft_putstr("\n----list_reverse---\n");
	list = ft_list_push_params(argc, argv);
	print_list(list);
	ft_putstr("\n");
	ft_list_reverse(&list);
	print_list(list);
	ft_putstr("\n-----foreach------\n");
	ft_list_foreach(list, &print_elem);
	ft_putstr("\n---foreach_if-----\n");
	ft_list_foreach_if(list, &print_elem, "lol", &ft_strcmp);
	ft_putstr("\n---ft_list_find-----\n");
	print_list(ft_list_find(list, "lol", &ft_strcmp));
	return (0);
}
