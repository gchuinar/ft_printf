/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 08:15:18 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/02 08:22:11 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnstr(const char *str, int i)
{
	while (i > 0)
	{
		write(1, str++, 1);
		i--;
	}
}
