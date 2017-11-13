/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:20:10 by rfautier          #+#    #+#             */
/*   Updated: 2017/11/12 21:10:40 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nbrdemot(char *s, int c)
{
	int		i;
	int		o;
	int		v;

	v = 0;
	o = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			return (o);
		while (s[i] != c && s[i] != '\0')
			i++;
		o++;
	}
//	printf("%d\n", o);
	return (o);
}

int		ft_nbrlettre(char *s, int c, char **str)
{
	int i;
	int o;
	int v;

	v = 0;
	o = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
		{
			v++;
			i++;
		}
		str[o] = malloc(sizeof(char *) * (v + 1));
		if (str[o] == NULL)
			return (1);
//		printf("nbr de lettre aux mot %d, =%d\n", o, v);
		v = 0;
		o++;
	}
	return (0);
}

char	**lol(char const *s, char c, int o, int v)
{
	int		i;
	char	**str;

	i = 0;
	str = (char **)malloc(sizeof(char **) * (nbrdemot((char *)s, c)));
	if (str == NULL)
		return (NULL);
	i = ft_nbrlettre((char *)s, c, str);
	if (i == 1)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
		{
			str[o][v] = s[i];
			v++;
			i++;
		}
		str[o][v] = '\0';
		v = 0;
		o++;
	}
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	int		o;
	int		v;

	o = 0;
	v = 0;

	if (lol(s, c, o, v) == NULL)
		return (NULL);
	return (lol(s, c, o, v));
}

/*int		main(int argc, char **argv)
{
	char **lol;
	int i;

	i = 0;
	lol = ft_strsplit(argv[1], ' ');
	printf("%s\n", lol[0]);
//	printf("%s\n", lol[1]);
//	printf("%s\n", lol[2]);
}*/
