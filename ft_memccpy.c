/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:17:29 by rfautier          #+#    #+#             */
/*   Updated: 2017/11/13 14:35:26 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	while (ptr2[i] != (unsigned char)c && i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	if (ptr2[i] != (unsigned char)c)
	{
		ptr2 = NULL;
		return (ptr2);
	}
	ptr1[i] = ptr2[i];
	i++;
	return ((void *)&ptr1[i]);
}
