/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_bin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 00:27:01 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/26 06:13:07 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/printf.h"

static char	**ft_alloctab(char **tab)
{
	if ((tab = (char**)malloc(sizeof(char*) * 3 + 1)))
	{
		if (((tab[0] = (char*)malloc(sizeof(char) * 1 + 1))
		&& (tab[1] = (char*)malloc(sizeof(char) * 8 + 1))
		&& (tab[2] = (char*)malloc(sizeof(char) * 23 + 1))))
		{
			tab[0][1] = '\0';
			tab[1][9] = '\0';
			tab[2][24] = '\0';
		}
		else
		{
			free(tab[0]);
			free(tab[1]);
			free(tab[2]);
			tab = NULL;
		}
	}
	return (tab);
}

static char	*ft_fill_mantisse(char *tab, char *bin)
{
	int	i;
	int	j;

	i = 0;
	j = 17;
	while (i < 24)
	{
		while (i < 16)
		{
			while (i < 8)
			{
				tab[i] = bin[j];
				i++;
				j++;
			}
			if (i == 8)
				j = 8;
			tab[i] = bin[j];
			i++;
			j++;
		}
		if (i == 16)
			j = 0;
		tab[i] = bin[j];
		i++;
		j++;
	}
	return (tab);
}

static void	ft_exp(char *str)
{
	int		len;
	char	*result;
	int		power;
	int		size;
	char	*nbr;
	char	*nb;
	int		i;

	nbr = ft_strdup("1");
	nb = ft_strdup("0");
	len = ft_strlen(str);
	size = len;
	len--;
	while (len >= 0)
	{
		if (str[len] == '1')
		{
			i = size - len;
//			printf("i = %d\n", i);
			if (i > 1)
			{
				nb = ft_strdup(nbr);
				nbr = ft_strdup("1");
			}
			while (i > 1)
			{
				nbr = ft_strdup(ft_doop_str(nbr, '*', "2"));
				i--;
//				printf("nbr while = %s\n", nbr);
			}
//				printf("nbr = %s\n", nbr);
			if (len != (size - 1))
			{
//				printf("nb s - 1 = %s\n", nb);
				nbr = ft_doop_str(nbr, '+', nb);
//				printf("nbr s - 1 = %s\n", nbr);
				free(nb);
			}
		}
		len--;
	}
	ft_putendl(nbr);
}

void	ft_add_bin(char *nbr)
{
	char	*bin;
	int		len;
	char	**tab;
	int		i;

	tab = ft_alloctab(tab);
	bin = ft_strdup(ft_convert_base(nbr, "01", "0123456789abcdef"));
	while (ft_strlen(bin) < 32)
		bin = ft_strjoin("0", bin);
	len = 24;
	tab[0][0] = bin[len];
	len++;
	i = 0;
	while (bin[len] != '\0')
	{
		tab[1][i] = bin[len];
		len++;
		i++;
	}
	len -= 16;
	tab[1][i] = bin[len];
	tab[2] = ft_fill_mantisse(tab[2], bin);
	tab[1] = "11111111";
	ft_exp(tab[1]);
}
