/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_mult.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 23:53:07 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/24 01:41:13 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_swap_mult(char *str)
{
	int i;

	i = 0;
	while (str[i] < '0' || str[i] > '9')
		i++;
	while(str[i] != '\0')
	{
		str[i - 1] = str[i];
		i++;
	}
	str[i - 1] = '0';
	return (str);
}