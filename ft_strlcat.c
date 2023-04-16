/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:02:06 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:02:06 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	x = 0;
	i = ft_strlen(dst);
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[x] != '\0' && (i + 1) < size)
	{
		dst[i] = src[x];
		x++;
		i++;
	}
	dst[i] = '\0';
	return (i + ft_strlen(&src[x]));
}
/*#include <stdio.h>
int	main(void)
{
    const char *src = "tata";
    char dst[50] = "linda";

    printf("%ld\n", ft_strlcat(dst, src, 50));
    return (0);
}*/

/*essa funcao concatena duas strings e retorna o valor de dest
 concatenado sendo que o size limita
o numero de caracs de src que sera concatenado em dest*/