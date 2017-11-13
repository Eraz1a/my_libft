/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:54:34 by rfautier          #+#    #+#             */
/*   Updated: 2017/11/13 17:02:55 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	compt(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{   
		i++;
	}   
	return (i);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	nbrs1;
	size_t	nbrs2;
	size_t	i;

	i = 0;
	nbrs1 = compt((char *)s1);
	nbrs2 = compt((char *)s2);
	while (i < nbrs1 && i < nbrs2 && i < n)
	{   
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}   
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
