/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:02:26 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:02:26 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	posi;

	posi = 0;
	while (s[posi] != '\0')
	{
		if (s[posi] == ((char)c))
			return ((char *)s + posi);
		posi++;
	}
	if (s[posi] == ((char)c))
		return ((char *)s + posi);
	return (NULL);
}
/*#include "libft.h"
#include <stdio.h>


int	main(void)
{
    const char *str = "abobora";
    printf("%s\n", ft_strchr(str, 'o'));
    return (0);
}*/

/*essa funçao indentifica a primeira correspondecia
de um caracter passado como parametro
dentro de uma str e retorna um ponteiro para ele*/