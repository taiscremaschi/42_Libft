/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:03:09 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:03:09 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	posi;

	str = (char *)s;
	posi = 0;
	while (posi < n)
	{
		if (str[posi] == ((char)c))
			return ((char *)s + posi);
		posi++;
	}
	return (0);
}

/*#include "libft.h"
#include <stdio.h>



int	main(void)
{
    char   *x;
    char *str = "123456tatazinha";
    
    x = ft_memchr(str, 't', 2);
    printf("%s\n", x);  
    return (0);
}*/

/*essa funçao procura a primeira ocorrencia do 
int c e retorna a str a partir dali*/