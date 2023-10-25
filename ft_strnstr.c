/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantam <disantam@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:44:43 by disantam          #+#    #+#             */
/*   Updated: 2023/10/25 16:26:46 by disantam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((char)*needle == '\0')
		return ((char *)haystack);
	while ((char)haystack[i] != '\0' && i < len)
	{
		while ((char)haystack[i + j] == (char)needle[j]
			&& (char)haystack[i + j] != '\0' && i + j < len)
			j++;
		if ((char)needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (NULL);
}

