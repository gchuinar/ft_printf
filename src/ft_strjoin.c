/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:56:48 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/20 23:59:53 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	size;
	char	*dest;
	int		i;
	int		j;

	dest = NULL;
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if ((dest = (char*)malloc(sizeof(char) * size + 1)))
	{
		while (s1[i] != '\0')
		{
			dest[i] = (char)s1[i];
			i++;
		}
		while (s2[j] != '\0')
			dest[i++] = (char)s2[j++];
		dest[i] = '\0';
	}
	return (dest);
}
