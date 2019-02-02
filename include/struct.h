/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 16:59:25 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/02 16:47:10 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_flags
{
	int	diese;
	int	zero;
	int	esp;
	int	plus;
	int	moins;
	int	precis;
	int	nbr_precis;
	enum
	{
		rien,
		hh,
		h,
		ll,
		l,
		j,
		z
	} e_prefix;
}				t_flags;

#endif
