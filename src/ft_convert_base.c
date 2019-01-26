/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 05:22:37 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/26 04:59:07 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

static unsigned int	ft_base_deci(int base_len, const char *base_src, char *nbr)
{
	int	i;
	int	j;
	unsigned int	nb;

	i = 0;
	nb = 0;
	while (nbr[i] != '\0')
	{
		j = 0;
		while (nbr[i] != base_src[j])
			j++;
		nb = nb + j;
		j = 0;
		i++;
		if (nbr[i] != '\0')
		{
			while (nbr[i] != base_src[j])
				j++;
			nb = (nb * base_len);
		}
	}
	return (nb);
}

static char	*ft_deci_base(unsigned int nbr, const char *base, size_t len)
{
	char			*nb;
	unsigned int	n;
	size_t			size;
	int				i;

	n = nbr;
	size = 0;
	i = 0;
	while ((n >= len))
	{
		size++;
		n /= len;
	}
	nb = ft_strnew(size + 1);
	while (nbr >= len)
	{
		nb[i] = base[nbr % len];
		nbr /= len;
		i++;
	}
	nb[i] = base[nbr % len];
	return (ft_strrev(nb));
}

char		*ft_convert_base(char *nbr, char *base_dest, char *base_src)
{
	int	base_len;

	if (((ft_check_base(base_src) == 1) && (ft_check_base(base_dest) == 1)
			&& (ft_check_nbr(nbr, base_src) == 1)))
	{
		base_len = ft_strlen(base_src);
		return (ft_deci_base(ft_base_deci(base_len, base_src, nbr),
			base_dest, ft_strlen(base_dest)));
	}
	return ("\n");
}
