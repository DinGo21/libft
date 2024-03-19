/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:19:39 by disantam          #+#    #+#             */
/*   Updated: 2024/03/19 15:35:50 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

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
