/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:59:15 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/14 20:38:06 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

static void	ft_error_check_base(int error)
{
	if (error == 1)
		ft_putendl("Err : la base doit contenir au moins 2 caracteres");
	if (error == 2)
		ft_putendl("Err : la base ne peut contenir 2 fois le meme caractere.");
	if (error == 3)
		ft_putendl("Err : la base ne doit pas contenir le signe '-' ou '+'.");
}

int			ft_check_base(const char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ft_strlen(base) <= 1)
	{
		ft_error_check_base(1);
		return (0);
	}
	while (base[++j] != '\0')
	{
		if (ft_strchr(&base[j], base[i]) != NULL)
		{
			ft_error_check_base(2);
			return (0);
		}
		i++;
	}
	if (ft_strchr(base, '-') != NULL || ft_strchr(base, '+') != NULL)
	{
		ft_error_check_base(3);
		return (0);
	}
	return (1);
}
