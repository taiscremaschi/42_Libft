/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:03:02 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:03:02 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			posi;
	unsigned char	*d;
	unsigned char	*str;

	posi = 0;
	d = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (!d && !str)
	{
		return (0);
	}
	while (posi < n)
	{
		d[posi] = str[posi];
		posi++;
	}
	return (d);
}
/*#include "libft.h"
#include <stdio.h>

int	main(void)
{
    const char *str = "tatazinha";
    char    dest[50];

    ft_memcpy(dest, str, 20);
    printf("%s\n", dest);
    return (0);
}*/

/*essa funcao copia uma str de tam n para o dest*/