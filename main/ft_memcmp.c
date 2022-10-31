/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:59:44 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/10 14:01:23 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	//unsigned char *s1;
	//unsigned char *s2;

	i = 0;
	s1 = (unsigned char *)s1;
	s2 = (unsigned char *)s2;
	while (i < n)
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

