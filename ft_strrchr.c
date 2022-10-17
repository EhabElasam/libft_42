/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:43:56 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/16 18:51:26 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			y;
	const char	*p;

	i = 0;
	y = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			y++;
		}
		i++;
	}
	if (c == '\0')
	{
		p = &s[i];
		return ((char *)p);
	}
	if (y == 0)
		return (0);
	else
		return ((char *)p);
}
