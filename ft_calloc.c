/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:56:37 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:24:41 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*new;

	totalsize = size * nmemb;
	new = malloc(totalsize);
	if (new == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (new);
	ft_memset(new, '\0', totalsize);
	return (new);
}

/*int main()
{   
    char    *x;
    x = ft_calloc(3, 5);
    printf("%p\n", x);
    printf("%s\n", x);
    return(0);
}*/

/*o calloc aloca a memoria solicitada e retorna
um ponteiro pra ela e definindo a memoria alocada 
para zero.size dos elementos e  nmemb numero de elementos a serem alocados */
