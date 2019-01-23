/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/01 19:21:00 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/14 20:38:27 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

int	ft_check_nbr(char *nbr, const char *base)
{
	int	i;
	int	j;

	i = 0;
	if (nbr[i] == '-' || nbr[i] == '+')
		i++;
	while (nbr[i] != '\0')
	{
		j = 0;
		while (nbr[i] != base[j])
		{
			if (base[j] == '\0')
			{
				ft_putendl("Erreur : nbr ne correspond pas a la base source.");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
