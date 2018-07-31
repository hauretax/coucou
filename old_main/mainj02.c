void ft_print_alphabet(void) ;
void ft_print_reverse_alphabet(void);
void ft_putchar(char c);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_putnbr(int nb);
void ft_print_numbers(void);

int		main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	ft_is_negative(12);
	ft_putchar('\n');
	ft_is_negative(-12);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_comb();
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_comb2();
	ft_putchar('\n');
	ft_putnbr(48);
	ft_putchar('\n');
	ft_putnbr(-95);
	ft_putchar('\n');
	ft_putnbr(50);
	ft_putchar('\n');
	ft_putnbr(-522222226);
	ft_putchar('\n');
	ft_print_numbers();
	ft_putchar('\n');

	return(0);
}
