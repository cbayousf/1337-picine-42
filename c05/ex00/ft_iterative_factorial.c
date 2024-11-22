/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:49:15 by cbayousf          #+#    #+#             */
/*   Updated: 2024/08/09 20:26:02 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 2;
	fact = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
	return (0);
}
