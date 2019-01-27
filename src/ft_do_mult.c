/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_mult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:10:55 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/27 23:07:42 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdio.h>

static int	ft_ret(int nbr)
{
	if (nbr > 9)
		return (nbr / 10);
	return (0);
}

static char	*ft_add_0_diz(char *sub_result, int len, int j)
{
	int	i;

	i = len - (j + 1);
	len = ft_strlen(sub_result) - 1;
	while (i > 0)
	{
		sub_result = ft_swap_mult(sub_result);
		i--;
	}
	return (sub_result);
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
	ft_fill_zero(result, len);
	j = ft_strlen(nb2) - 1;
	ret = 0;
//	printf("nb1 = %s\n", nb1);
//	printf("nb2 = %s\n", nb2);
//	printf("len = %d\n", len);
	len++;
	while (len >= 0 && j >= 0)
	{
		sub_result = ft_strnew(len);
		ft_fill_A(sub_result, len);
//		printf("sub_result fill_0 = %s\n", sub_result);
		i = ft_strlen(nb1) - 1;
		while (i >= 0 || ret > 0)
		{
			if (i < 0)
				nbr = ret;
			else
				nbr = ((nb1[i] - '0') * (nb2[j] - '0') + ret);
//			printf("nbr = %d\n", nbr);
//			printf("ret av = %d\n", ret);
			if(((ret = ft_ret(nbr)) == 0))
			{
				sub_result[len] = (nbr) + '0';
			}
			else if (((ret = ft_ret(nbr)) > 0))
			{
//				printf("len else if = %d\n", len);
//				printf("nbr = %d\n", nbr);
//				printf("nbr %% 10 = %d\n", (nbr % 10));
				sub_result[len] = (nbr % 10) + '0';
//				printf("sub_result[len] = %c\n", sub_result[len]);
			}
//			printf("ret ap = %d\n", ret);
			i--;
			len--;
//			printf("sub_result while = %s\n", sub_result);
		}
		len = (int)(ft_strlen(nb1) + ft_strlen(nb2));
		sub_result = ft_decal_A(ft_add_0_diz(sub_result, ft_strlen(nb2), j));
		j--;
//		printf("sub_result av result = %s\n", sub_result);
//		printf("result av add sub_result = %s\n", result);
		result = ft_doop_str(ft_decal_0(result), '+', ft_decal_0(sub_result));
		free(sub_result);
	}
	return (ft_decal_0(result));
}

char	*ft_do_mult(char *nb1, char *nb2, char *result)
{
	int	neg;
	neg = ft_mult_is_neg((&nb1), (&nb2));
	if (ft_sizecmp(nb1, nb2) == 1)
		result = ft_mult(nb1, nb2);
	else if (ft_sizecmp(nb1, nb2) == 2)
		result = ft_mult(nb2, nb1);
	else if (ft_sizecmp(nb1, nb2) == 0)
		result = ft_mult(nb1, nb2);
	if (neg == 1)
		result = ft_strjoin("-", result);
//	printf("result mult = %s\n", result);
	return (result);
}
