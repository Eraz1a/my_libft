/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 21:32:34 by rfautier          #+#    #+#             */
/*   Updated: 2017/11/12 18:37:32 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbr(int nbr)
{
	int i;

	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_j(char *rstr, int n, int i, char *str)
{
	int j;

	j = 0;
	i--;
	if (n < 0)
	{
		rstr[0] = '-';
		j++;
	}
	while (i > -1)
	{
		rstr[j] = str[i];
		i--;
		j++;
	}
	rstr[j] = '\0';
	return (rstr);
}

char	*ft_re(int n, int j, char *str, int nbr)
{
	char	*rstr;
	int		i;

	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
		nbr = -nbr;
	i = ft_nbr(nbr);
	str = malloc(sizeof(char *) * i);
	rstr = malloc(sizeof(char *) * (i + j + 1));
	if (str == NULL || rstr == NULL)
		return (NULL);
	i = 0;
	nbr = (n < 0) ? -n : n;
	while (nbr != 0)
	{
		str[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i++;
	}
	return (ft_j(rstr, n, i, str));
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		nbr;
	int		j;

	str = NULL;
	j = 0;
	if (n < 0)
		j = 1;
	i = 0;
	nbr = n;
	return (ft_re(n, j, str, nbr));
}
