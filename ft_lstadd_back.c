/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:28:19 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/28 18:47:47 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;
	if (!new)
		return (NULL);
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	p =  ft_lstlast(*lst)
		p -> next = new;
}
