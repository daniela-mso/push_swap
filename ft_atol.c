# include "push_swap.h"


int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

long int	ft_atol(char *str)
{
	long int	i;
	long int	num;
	int	sign;

	sign = 1;
	i = 0;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return num;
}