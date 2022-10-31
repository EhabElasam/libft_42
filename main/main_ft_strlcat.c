/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:15:33 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/05 16:15:49 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strlen(const char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return(i);
}

size_t     ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t  slen;
        size_t  dlen;
        size_t  i;
        size_t  y;

        i = 0;
        y = 0;
        while (dst[y] != '\0')
        {
                y++;
        }
        dlen = y ;
        slen = ft_strlen (src);
        if (size == 0 || size <= dlen)
        {
                return (slen + size);
        }
        while (src[i] != '\0' && i < size - dlen)
        {
                dst[y] = src[i];
                i++;
                y++;
        }
        dst[y] = '\0';
        return (dlen + slen);
}


int main(void)
{
        char src[] = "Hello";
        char dst[] = "364";
        printf("%li\n", ft_strlcat(dst, src, 4));
        printf("%s\n", dst);
}

