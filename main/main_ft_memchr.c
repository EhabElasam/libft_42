/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:26:57 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/10 11:41:48 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t	i;

	i = 0;
	p = (unsigned char*)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	return (0);
}

int main()
{
	char s[100] = "hey how are you @yahoo.com";
	char *d = ft_memchr(s, '@',50);
	printf("s = %s\n", d);
	return (0);
}
