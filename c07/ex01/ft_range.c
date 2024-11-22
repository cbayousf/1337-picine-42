/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:14:28 by cbayousf          #+#    #+#             */
/*   Updated: 2024/08/12 14:43:02 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	t = malloc(sizeof(int) * len);
	if (t == 0)
		return (0);
	while (max > min)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
