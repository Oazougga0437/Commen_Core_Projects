#include "libft.h"

static int	count_case(long n)
{
	int	cpt;

	cpt = 0;
	if (n <= 0)
		cpt++;
	while (n != 0)
	{
		n = n / 10;
		cpt++;
	}
	return (cpt);
}

char	*ft_itoa(int n)
{
	long	nt;
	int		nb_cases;
	int		i;
	char	*str;

	nt = n;
	nb_cases = count_case(nt);
	str = malloc(sizeof(char) * (nb_cases + 1));
	if (!str)
		return (NULL);
	str[nb_cases] = '\0';
	if (nt < 0)
		nt = -nt;
	i = nb_cases - 1;
	while (nt > 0)
	{
		str[i] = (nt % 10) + '0';
		nt = nt / 10;
		i--;
	}
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
		str[0] = '-';
	return (str);
}