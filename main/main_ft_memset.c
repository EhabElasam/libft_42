/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:05:02 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/06 19:18:17 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *p;
	unsigned int i;

	i = 0;
	p = s;
	while (i < n)
	{
		*p++ = (unsigned char)c;
		i++;
	}
	return (s);
}

int main()
{
	char arr[50];
	printf("write: ");
	scanf("%49[^\n]", arr);
	ft_memset(arr + 3, '$', 4);
	printf("result: %s", arr);
	return (0);
}
