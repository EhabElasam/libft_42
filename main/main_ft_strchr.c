/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:28:27 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/04 15:28:34 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    *ft_strchr(const char *s, int c)
{
        while (*s != '\0')
        {
                if (*s == c)
                        return (char *)s;
                s++;
        }
        return(NULL);
}

int main()
{
        char s[] = "hello Hello";
        char c;

        c = 'l';
        printf("%s\n", ft_strchr( s, c) );
        return (0);
}

