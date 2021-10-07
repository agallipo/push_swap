/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:42:04 by agallipo          #+#    #+#             */
/*   Updated: 2021/10/06 11:42:08 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void ft_rrb(t_list **stack_b)
{
	t_list	*aux;
	t_list	*last;
	int		altura;

	last = *stack_b;
	altura = 0;
	while (last->next)
	{
		last = last->next;
		altura++;
	}
	aux = ft_lstnew(last->content);
	ft_lstadd_front(stack_b, aux);
	last = *stack_b;
	while (altura != 0)
	{
		last = last->next;
		altura--;
	}
	last->next = NULL;
}
void ft_rra(t_list **stack_a)
{
	t_list	*aux;
	t_list	*last;
	int		altura;

	last = *stack_a;
	altura = 0;
	while (last->next)
	{
		last = last->next;
		altura++;
	}
	aux = ft_lstnew(last->content);
	ft_lstadd_front(stack_a, aux);
	last = *stack_a;
	while (altura != 0)
	{
		last = last->next;
		altura--;
	}
	last->next = NULL;
}

void ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
}