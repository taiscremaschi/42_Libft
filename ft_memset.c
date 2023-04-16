/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:02:51 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:02:51 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)s;
	while (i < n)
	{
		x[i] = c;
		i++;
	}
	return (x);
}

/*int main()
{
    char    *x;
    char    s[50] = "1234tatazinha";
    
    x = ft_memset(s, '.', 4);
    printf("%s\n", x);
    return(0);
}*/

/*a função memset substitui um determinado numero por um int na str*/