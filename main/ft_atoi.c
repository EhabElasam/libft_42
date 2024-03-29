/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:11:12 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/31 13:51:21 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			s;
	long int	r;

	r = 0;
	s = 1;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\r' || *nptr == '\t'
		|| *nptr == '\v' || *nptr == '\n')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			s = -s;
		nptr++;
	}
	while (*nptr != '\0' && (*nptr >= '0' && *nptr <= '9'))
	{
		r = (r * 10) + (*nptr - '0');
		nptr++;
		if (r * s > 2147483647)
			return (-1);
		if (r * s < -2147483648)
			return (0);
	}
	return (r * s);
}

#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("ft_atoi: %d\n", ft_atoi(argv[1]));
	printf("atoi: %d\n", atoi(argv[1]));
	return (0);
}
