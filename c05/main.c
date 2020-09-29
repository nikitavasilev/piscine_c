#include <stdio.h>
#include <limits.h>
#include "./ex00/ft_iterative_factorial.c"
#include "./ex01/ft_recursive_factorial.c"
#include "./ex02/ft_iterative_power.c"
#include "./ex03/ft_recursive_power.c"
#include "./ex04/ft_fibonacci.c"
#include "./ex05/ft_sqrt.c"
//#include "./ex06/ft_is_prime.c"
#include "./ex07/ft_find_next_prime.c"
#include "./ex08/ft_ten_queens_puzzle.c"

int main(void)
{
	printf("ft_iterative_factorial: %d\n", ft_iterative_factorial(5));
	printf("ft_recursive_factorial: %d\n", ft_recursive_factorial(5));
	printf("ft_iterative_power: %d\n", ft_iterative_power(89, 2));
	printf("ft_recursive_power: %d\n", ft_recursive_power(89, 2));
	printf("ft_fibonacci: %d\n", ft_fibonacci(5));
	printf("ft_sqrt: %d\n", ft_sqrt(29909961));
	printf("ft_is_prime: %d\n", ft_is_prime(INT_MAX));
	printf("ft_find_next_prime: %d\n", ft_find_next_prime(5513456));
//	printf("TEN QUEENS:\n");
//	printf("Number of solutions: %d\n", ft_ten_queens_puzzle());
	return (0);
}
