/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:12:50 by agallipo          #+#    #+#             */
/*   Updated: 2021/10/11 20:22:11 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(t_list **stack_a)
{
	t_list	*max;
	t_list	*lst;

	max = *stack_a;
	lst = max->next;
	while (lst)
	{
		if (max->content < lst->content)
			max = lst;
		lst = lst->next;
	}
	return (max->content);
}

int	ft_low(t_list **stack_a)
{
	t_list	*low;
	t_list	*lst;

	low = *stack_a;
	lst = low->next;
	while (lst)
	{
		if (low->content > lst->content)
			low = lst;
		lst = lst->next;
	}
	return (low->content);
}

void	ft_five(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*lst;

	lst = *stack_a;
	i = 0;
	while (ft_check_nums(stack_a) > 3)
	{
		while (i < 2)
		{
			lst = *stack_a;
			if (lst->content == ft_max(stack_a))
			{
				ft_pb(stack_a, stack_b);
				break ;
			}
			ft_sa(stack_a);
			i++;
		}
		lst = ft_lstlast(*stack_a);
		while (ft_check_nums(stack_a) > 3)
		{
			lst = ft_lstlast(*stack_a);
			if (lst->content == ft_max(stack_a))
			{
				ft_rra(stack_a);
				ft_pb(stack_a, stack_b);
				break ;
			}
			ft_rra(stack_a);
		}
	}
	ft_three(stack_a);
	if (ft_check_nums(stack_b) == 2)
	{
		ft_pa(stack_a, stack_b);
		ft_ra(stack_a);
	}
	ft_pa(stack_a,  stack_b);
	ft_ra(stack_a);
	ft_print_lst(stack_a, stack_b);
}