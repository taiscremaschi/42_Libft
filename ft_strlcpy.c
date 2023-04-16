/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:01:59 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:01:59 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	posi;

	posi = 0;
	if (size > 0)
	{
		while (src[posi] != '\0' && posi < size -1)
		{
			dst[posi] = src[posi];
			posi++;
		}
		dst[posi] = '\0';
	}
	return (ft_strlen(src));
}

/*#include <stdio.h>

int	main(void)
{
     const char *src = "tata linda tatazinha";
    char dst[50];  

    printf("%zd\n", ft_strlcpy(dst, src, 3));
    printf("%s\n", dst);
    return(0);
}*/

/* essa função copia x chars da str original para
sua copia retornando o tam da str original.*/
