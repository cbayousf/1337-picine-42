/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:55:12 by cbayousf          #+#    #+#             */
/*   Updated: 2024/08/15 16:55:51 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_lenght;

	i = 0;
	total_lenght = 0;
	while (i < size)
	{
		total_lenght += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total_lenght += ft_strlen(sep) * (size - 1);
	return (total_lenght + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	i = 0;
	c = 0;
	s = malloc(calculate_total_length(size, strs, sep) * sizeof(char));
	if (!s)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
