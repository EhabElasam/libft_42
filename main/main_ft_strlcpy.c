/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:22:09 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/05 14:59:13 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t i;

	len = ft_strlen(src);
	i = 0;
	
	while (src[i] != '\0' &&  i <  size )
	{
		dst[i] = src[i];
		i++;
	}
	if (size)
		dst[i] = '\0';
	return (len);
}
int main(void)
{
        char src[50] = "Hello";
        char dst[50] = "356445";
        printf("%li\n", ft_strlcpy(dst, src, 3));
        printf("%s\n", dst);
        return (0);
}
