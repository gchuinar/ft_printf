/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prefix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 10:49:01 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/02 08:15:06 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "../include/printf.h"

int	ft_prefix(char *str, va_list *args, int tab_nbr, int uns_or_not)
{
	int 		i;
	uintmax_t	nbr;

	i = 1;

	if (uns_or_not == 1)
	{
		nbr = va_arg(*args, uintmax_t);
		if (str[i] == 'h' && str[i + 1] == 'h')
			tab[tab_nbr] = (unsigned char)nbr;
		else if (str[i] == 'h')
			tab[tab_nbr] = (unsigned short)nbr;
		else if (str[i] == 'l' && str[i + 1] == 'l')
			tab[tab_nbr] = (unsigned long long)nbr;
		else if (str[i] == 'l')
			tab[tab_nbr] = (unsigned long)nbr;
		else if (str[i] == 'j')
			tab[tab_nbr] = nbr;
		else if (str[i] == 'z')
			tab[tab_nbr] = (size_t)nbr;
		else
			tab[tab_nbr] = (unsigned int)nbr; 
	else
	{
		nbr = va_arg(*args, intmax_t);
		if (str[i] == 'h' && str[i + 1] == 'h')
			tab[tab_nbr] = (char)nbr;
		else if (str[i] == 'h')
			tab[tab_nbr] = (short)nbr;
		else if (str[i] == 'l' && str[i + 1] == 'l')
			tab[tab_nbr] = (long long)nbr;
		else if (str[i] == 'l')
			tab[tab_nbr] = (long)nbr;
		else if (str[i] == 'j')
			tab[tab_nbr] = (intmax_t)nbr;
		else if (str[i] == 'z')
			tab[tab_nbr] = (size_t)nbr;
		else
			tab[tab_nbr] = (int)nbr; 
	}
		return (0);
	else if (ft_check_option(str[i] == 1))
		return (1);
	else
		return (2);
}*/
