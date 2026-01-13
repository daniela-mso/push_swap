#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_strlen(const char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memset(void *s, int c, size_t n_bytes)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < n_bytes)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t n_elements, size_t size)
{
	void	*ptr;

	ptr = malloc(n_elements * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, n_elements * size);
	return (ptr);
}
