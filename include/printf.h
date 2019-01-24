/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 21:04:44 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/24 05:19:38 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

void	ft_display_l(const char *str, va_list param, int i, int l);
void	ft_display_a_A(const char *str, va_list param, int i, int s);
void	ft_display_h(const char *str, va_list param, int i, int h);

void	ft_putfloat_hexa(double nbr, int i, char c);
char	*ft_convert_u(int nbr, char c);
char	*ft_uitoa(unsigned long long n);
void	ft_putlonglong(long long nbr);
void	ft_putlong(long nbr);
void	ft_uputlonglong(unsigned long long nbr);
void	ft_uputnbr(unsigned int nbr);
char	*ft_double_to_ull(double nbr, int count, char *str);
unsigned long long	ft_atoi_ull(const char *str);
double	ft_power_dbl(unsigned long long nbr, int power);
char	*ft_conv_b_d(char *str);
char	*ft_doop_str(char *nb1, char c, char *nb2);
int		ft_sizecmp(const char *str1, const char *str2);
char	*ft_do_add(char *nb1, char *nb2, char *result);
char	*ft_do_mult(char *nb1, char *nb2, char *result);
void	ft_fill_zero(void *s, size_t n);
void	ft_fill_A(void *s, size_t n);
char	*ft_decal_0(char *str);
char	*ft_decal_A(char *str);
char	*ft_swap_mult(char *str);
int		ft_mult_is_neg(char *nb1, char *nb2);

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrev(char *str);
char	*ft_strjoin(const char *s1, const char *s2);
char    *ft_strnew(size_t size);
void    *ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strdup(const char *str);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putendl(char *str);

void	ft_putnbr(int nbr);

int		ft_check_base(const char *base);
int		ft_check_nbr(char *nbr, const char *base);
char	*ft_convert_base(char *nbr, char *base_dest, char *base_src);
#endif
