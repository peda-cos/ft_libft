/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:01:28 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/07 15:56:20 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>
void	print(t_list *head)
{
	t_list	*temp;

	temp = head;
	while (temp != NULL)
	{
		printf("%i ", *(int *)(temp->content));
		temp = temp->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	int		x;
	int		y;
	int		z;
	t_list	*head;

	x = 10;
	y = 20;
	z = 30;
	head = ft_lstnew(&x);
	head->next = ft_lstnew(&y);
	head->next->next = ft_lstnew(&z);
	print(head);
	return (0);
}*/
