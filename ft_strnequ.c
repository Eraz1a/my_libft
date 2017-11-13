/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:43:46 by rfautier          #+#    #+#             */
/*   Updated: 2017/11/12 22:44:44 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] && s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] == s2[i] || (i >= n))
		return (1);
	return (0);
}
