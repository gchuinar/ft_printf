/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 21:04:44 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/02 13:15:43 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include "struct.h"
# include "check.h"

void	ft_display_l(const char *str, va_list param, int i, int l);
void	ft_display_a_A(const char *str, va_list param, int i);
void	ft_display_h(const char *str, va_list param, int i, int h);

void	ft_putfloat_hexa(double nbr, int i, char c);
char	*ft_convert_u(int nbr, char c);
char	*ft_uitoa(unsigned long long n);
void	ft_putlonglong(long long nbr);
void	ft_putlong(long nbr);
void	ft_uputlonglong(unsigned long long nbr);
void	ft_uputnbr(unsigned int nbr);
unsigned long long	ft_atoi_ull(const char *str);
void	ft_putfloat(double nbr, int i);
int		ft_prefix(char **str);
char	**ft_alloc_option(char *str);
void	ft_putnstr(const char *str, int i);
char	*ft_check_flags(char **format, t_flags *opt);

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrev(char *str);
char	*ft_strjoin(const char *s1, const char *s2);
char    *ft_strnew(size_t size);
void    *ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strdup(const char *str);
char	*ft_strndup(const char *str, size_t len);
void	ft_bzero(void *s, size_t n);
int		ft_isdigit(int c);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putendl(char *str);

void	ft_putnbr(int nbr);

char	*ft_get_memory(const void *addr, size_t size);

int		ft_check_base(const char *base);
int		ft_check_nbr(char *nbr, const char *base);
char	*ft_convert_base(char *nbr, char *base_dest, char *base_src);
#endif
