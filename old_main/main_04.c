void ft_putchar(char c);
void ft_putnbr(int nb);
int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main(void)
{
	ft_putnbr(ft_iterative_factorial(4));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(4));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putnbr(ft_iterative_power(2, 3));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(0, 5));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putnbr(ft_fibonacci(10));
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(4));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putnbr(ft_is_prime(4));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putnbr(ft_find_next_prime(102));
	ft_putchar('\n');
	return (0);
}
