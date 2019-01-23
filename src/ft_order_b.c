/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_deci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 01:52:45 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/14 20:33:57 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

static char	*ft_fill_exp(char *str)
{
	char	*dest;
	int		i;
	int		j;

	dest = NULL;
	i = 25;
	j = 0;
	if ((dest = (char*)malloc(sizeof(char) * 9)))
	{
		while (str[i] != '\0')
		{
			dest[j] = str[i];
			i++;
			j++;
			if (str[i] == '\0')
			{
				dest[j] = str[16];
				dest[j + 1] = '\0';
			}
		}
	}
	return (dest);
}

static char	*ft_fill_mant(char *str)
{
	char	*dest;
	int		i;
	int		j;

	dest = NULL;
	i = 17;
	j = 0;
	if ((dest = (char*)malloc(sizeof(char) * 24)))
	{
		while (i < 23)
			dest[j++] = str[i++];
		i = 8;
		while (i < 16)
			dest[j++] = str[i++];
		i = 0;
		while (i < 8)
			dest[j++] = str[i++];
		dest[j] = '\0';
	}
	return (dest);
}

static char	*ft_fill_sign(char *str)
{
	char	*dest;
	
	dest = NULL;
	if ((dest = (char*)malloc(sizeof(char) * 2)))
	{
		dest[0] = str[24];
		dest[1] = '\0';
	}
	return (dest);
}

static void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		free(tab[i]);
		i++;
	}
}

char	**ft_order_b(char *str)
{
	char	**tab;

	tab = NULL;
	if (!(tab = (char**)malloc(sizeof(char*) * 4)))
	{
		ft_free_tab(tab);
		return (NULL);
	}
	if (!((tab[0] = (char*)malloc(sizeof(char) * 2))
			|| !(tab[1] = (char*)malloc(sizeof(char) * 9))	\
			|| !(tab[2] = (char*)malloc(sizeof(char) * 24))))	\
	{
		ft_free_tab(tab);
		return (NULL);
	}
	tab[0] = ft_fill_sign(str);
	tab[1] = ft_fill_exp(str);
	tab[2] = ft_fill_mant(str);
	return (tab);
}
