/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 13:12:24 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/02 13:15:15 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

char	*ft_check_flags(char **format, t_flags *opt);
char	*ft_check_prefix(char **format, t_flags *opt);
char	*ft_check_precis(char **format, t_flags *opt);

#endif
