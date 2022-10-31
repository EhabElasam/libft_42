/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:10:03 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/04 17:19:19 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    *ft_strrchr(char *s, int c)
{
        int     y;
        int     x;
        int     cn;

        y = 0;
        i = 0;
        cn = 0;
        while (s[i] != '\0')
        {
                if (s[i] == c)
                {
                        y = i;
                        cn++;
                }
                i++;
        }
        if (cn > 0)
                return (s + y);
	return (NULL);
}

int	main()
{
	char s[] = "Hallo Hello hi";
	char c = 'o';
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}
