/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hkhoshne <hkhoshne@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 12:16:46 by hkhoshne      #+#    #+#                 */
/*   Updated: 2025/06/19 12:16:46 by hkhoshne      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int		ft_printf(const char *str, ...);
int		ft_putchar_pf(char c);
int		ft_putstr_pf(char *str);
int		ft_putnbr_pf(int n);
int		ft_putuint_pf(unsigned int n);
int		ft_puthex_pf(unsigned int n, char *base);
int		ft_putptr_pf(void *ptr);

#endif
