/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:52:31 by rfautier          #+#    #+#             */
/*   Updated: 2017/11/13 16:32:18 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = NULL;
	i = 0;
	if (c == '\0')
	{
		while (1)
		{
			if (s[i] == '\0')
			{
				ptr = (char *)&s[i];
				return (ptr);
			}
			i++;
		}
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		i++;
	}
	return (ptr);
}
