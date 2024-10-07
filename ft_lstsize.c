/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 03:49:09 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/07 15:56:31 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next; 
	}
	return (len);
}

#include <stdio.h>

void	print(t_list *head)
{
	t_list *temp;

	temp = head;
	while (temp != NULL)
	{
		printf("%i ", *(int *)(temp->content));
		temp = temp->next;
	}
}

int	main(void)
{
	char	*text;
	t_list	*head;

	text = "AOBA bao so";
	head = ft_lstsize(&text);
	print(head);
	return (0);
}
