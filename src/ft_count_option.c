/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_option.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 12:04:12 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/01 18:35:23 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

static int	ft_count_option(char *str)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count++;
			j = i;
			while (str[j + 1] == '%')
				j++;
		}
		if (j > i)
			i = j + 1;
		else
			i++;
	}
	return (count);
}

char	**ft_alloc_option(char *str)
{
	char	**tab;
	int		nbr_opt;

	nbr_opt = ft_count_option(str);
	if (!(tab = (char**)malloc(sizeof(char*) * nbr_opt + 1)))
		tab = NULL;
	return (tab);
}
