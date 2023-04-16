/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:01:50 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:01:50 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}

/*#include "libft.h"
#include <stdio.h>


int	main(void)
{
    const char *src = "tata";
 
   printf("%ld\n", ft_strlen(src));
    return (0);
}*/

/* essa função conta e retorna o tamanho da str */