# include "push_swap.h"

long int	ft_atol(char *str)
{
	long int	i;
	long int	num;
	int			sign;

	sign = 1;
	i = 0;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign*= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{	
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * sign);
}