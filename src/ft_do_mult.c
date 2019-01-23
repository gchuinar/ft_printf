/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_mult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:10:55 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/23 05:27:43 by gchuinar         ###   ########.fr       */
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

static char	*ft_swap(char *str)
{
	int	i;

	i = 0;
	printf("str swap = %s\n", str);
	while (str[i] < '0' || str[i] > '9')
		i++;
	while(str[i] != '\0')
	{
		str[i - 1] = str[i];
		i++;
	}
	printf("str swap apres while = %s\n", str);
	str[i - 1] = '0';
	printf("str swap avant return = %s\n", str);
	return (str);
}

static char	*ft_add_0_diz(char *sub_result, int len, int j)
{
	int	i;

	i = len - (j + 1);
	len = ft_strlen(sub_result) - 1;
	while (i > 0)
	{
		sub_result = ft_swap(sub_result);
		i--;
	}
	return (sub_result);
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
	ft_fill_zero(result, len);
	j = ft_strlen(nb2) - 1;
	ret = 0;
	sub_result = ft_strnew(len);
	while (len >= 0 && j >= 0)
	{
		ft_fill_A(sub_result, len);
		printf("len = %d\n", len);
		printf("j = %d\n", j);
		i = ft_strlen(nb1) - 1;
		while (i >= 0)
		{
			printf("i = %d\n", i);
			nbr = ((nb1[i] - '0') * (nb2[j] - '0') + ret);
			printf("nbr = %d\n", nbr);
			printf("nb1 - '0' = %d\n", nb1[i] - '0');
			printf("nb2 - '0' = %d\n", nb2[j] - '0');
			printf("ret = %d\n", ret);
			if(((ret = ft_ret(nbr)) == 0))
				sub_result[len] = (nbr) + '0';
			else if (((ret = ft_ret(nbr)) == 0))
				sub_result[len] = (nbr % 10) + '0';
			i--;
			printf("sub_result dans le while = %s\n", sub_result);
			printf("ret fin = %d\n", ret);
			len--;
		}
		len = (int)(ft_strlen(nb1) + ft_strlen(nb2));
		printf("sub_result = %s\n", sub_result);
		sub_result = ft_decal(ft_add_0_diz(sub_result, ft_strlen(nb2), j));
		j--;
		result = ft_doop_str(result, '+', sub_result);
		printf("result fin de boucle = %s\n", result);
	}
	return (result);
}

char	*ft_do_mult(char *nb1, char *nb2, char *result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_sizecmp(nb1, nb2) == 1)
	{
		printf("size = 1\n");
		result = ft_mult(nb1, nb2);
	}
	else if (ft_sizecmp(nb1, nb2) == 2)
	{
		printf("size = 2\n");
		result = ft_mult(nb2, nb1);
	}
	else if (ft_sizecmp(nb1, nb2) == 0)
	{
		printf("size = 0\n");
		result = ft_mult(nb1, nb2);
	}

	return (0);
}

int	main(void)
{
	char *a;
	char *b;

	a = ft_strdup("54321");
	b = ft_strdup("12");
	ft_putendl(ft_doop_str(a, '*', b));
	ft_putendl("probleme de retenu");
	return (0);
}
