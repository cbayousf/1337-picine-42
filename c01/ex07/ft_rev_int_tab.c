/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 09:54:49 by cbayousf          #+#    #+#             */
/*   Updated: 2024/07/28 15:19:36 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;
	int	len;

	len = size - 1;
	i = 0;
	while (i <= len)
	{
		t = tab[i];
		tab[i] = tab[len];
		tab[len] = t;
		len--;
		i++;
	}
}
