/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_dbl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 04:50:43 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/16 04:57:49 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double   ft_power_dbl(unsigned long long nbr, int power)
{
	double  nb;

	nb = nbr;
	while (power > 1)
	{
		nb *= nbr;
		power--;
	}
	return (nb);
}
