/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:33:07 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/06 12:33:17 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
        char    *str;
        size_t  i;

        str = s;
        i = 0;
        while (i < n)
        {
                str[i] = '\0';
                i++;
        }
}


int main()
{
        char s[500];
        printf("Enter a string:");
        scanf("%499[^\n]", s);
        ft_bzero(s + 6, 5);
        printf("The replacing kjkfk: %s\n", s );
        return (0);
}
