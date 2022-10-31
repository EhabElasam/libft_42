/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:52:11 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/10 17:19:43 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if(!dest&& !src)
		return (0);
	else if (src == dest)
		return ((unsigned char *)dest);
//else if ((unsigned char *)dest > (unsigned char *)src)
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return ((unsigned char *)dest);
}


int main()
{
	char des[100] = "hey how are you @yahoo.com";
	char sr[100] = "Ehab";
	char *d = ft_memmove(des, sr,  4);
	printf("s = %s\n", d);
	return (0);
}
