/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:06:27 by icoman            #+#    #+#             */
/*   Updated: 2025/12/13 13:22:58 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		count;

	current = lst;
	count = 0;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}

/*
int main()
{
	t_list *testa = NULL;
	ft_lstadd_front(&testa, ft_lstnew("Nodo 1"));
	ft_lstadd_front(&testa, ft_lstnew("Nodo 2"));
	ft_lstadd_front(&testa, ft_lstnew("Nodo 3"));
	ft_lstadd_front(&testa, ft_lstnew("Nodo 4"));
	printf("%d\n", ft_lstsize(testa));
	return (0);
}
*/