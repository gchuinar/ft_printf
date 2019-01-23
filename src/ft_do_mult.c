/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_mult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:10:55 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/23 01:18:43 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

static int	ft_ret(int nbr)
{
	if (nbr > 9)
		return (nbr / 10);
	return (0);
}

static char	*ft_decal(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i] == 'A')
		i++;
	dest = ft_strdup(&str[i]);
	return (dest);
}

static char	*ft_mult(char *nb1, char *nb2)
{
	int		len;
	int 	nbr;
	int		i;
	int		j;
	int		ret;
	char	*result;
	char	*sub_result;

	len = (int)(ft_strlen(nb1) + ft_strlen(nb2));
	result = ft_strnew(len);
	result = ft_fill_zero(result, len);
	j = ft_strlen(nb2) - 1;
	ret = 0;
	while (len >= 0 && j >= 0)
	{
		sub_result = ft_strnew(len);
		sub_result = ft_fill_A(sub_result, len);
		i = ft_strlen(nb1) - 1;
		while (i >= 0)
		{
			nbr = ((nb1[i] - '0') * (nb2[j] - '0') + ret);
			sub_result[len] = (nbr % 10) + '0';
			if((ret = ft_ret(nbr) == 0))
				sub_result[len] = (nbr) + '0';
			else if ((ret = ft_ret(nbr) == 0))
				sub_result[len] = nbr + '0';
			i--;
		}
		sub_result = ft_decal(sub_result);
		j--;
		len--;
		result = ft_doop_str(result, '+', sub_result);
	}
	return (result);
}

char	*ft_do_mult(nb1, nb2, result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_sizecmp(nb1, nb2) == 1)
	{
		result = ft_mult(nb1, nb2);
	}
	else if (ft_sizecmp(nb1, nb2) == 2)
	{
		result = ft_mult(nb2, nb1);
	}
	else if (ft_sizecmp(nb1, nb2) == 0)
	{
		result = ft_mult(nb1, nb2);
	}

	return (0);
}

int	main(void)
{
	const char *a;
	const char *b;

	a = (const char*)ft_strdup("321");
	b = (const char*)ft_strdup("10");
	ft_putendl(ft_doop_str(a, '*', b));
	return (0);
}
