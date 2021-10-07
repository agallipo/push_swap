/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:42:17 by agallipo          #+#    #+#             */
/*   Updated: 2021/10/06 11:42:19 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **stack_a)
{
	t_list	*aux;

	aux = *stack_a;
	*stack_a = (*stack_a)->next;
	aux->next = (*stack_a)->next;
	(*stack_a)->next = aux;
}

void	ft_sb(t_list **stack_b)
{
	t_list	*aux;

	aux = *stack_b;
	*stack_b = (*stack_b)->next;
	aux->next = (*stack_b)->next;
	(*stack_b)->next = aux;
}
void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
}