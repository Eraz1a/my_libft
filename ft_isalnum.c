/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:45:59 by rfautier          #+#    #+#             */
/*   Updated: 2017/11/11 15:34:38 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ||
			(c >= 48 && c <= 57))
	{
		return (1);
	}
	return (0);
}
