/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:29:55 by cbayousf          #+#    #+#             */
/*   Updated: 2024/07/26 21:33:51 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	while_ins(char a, char b, char c)
{
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (c > b && b > a)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					if (a != '7')
					{
						write(1, ", ", 2);
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while_ins(a, b, c);
}
