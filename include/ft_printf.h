/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:19:39 by disantam          #+#    #+#             */
/*   Updated: 2024/06/06 11:30:34 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINTF_H__
# define __FT_PRINTF_H__

# include <stdarg.h>
# include "libft.h"

/**
 * @brief Sends formatted output to stdout.
 * 
 * @param s The string to be formated.
 * @return If successful, the total number of characters written 
 * is returned. On failure, a negative number is returned.
*/
int	ft_printf(char const *s, ...);

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_dec(long n, char f);
int	ft_hex(size_t ptr, char f);

#endif
