/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:01:27 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:01:27 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (find[x] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		x = 0;
		while (str[i + x] == find[x] && i + x < len && str[i + x] && find[x])
			x++;
		if (find[x] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
