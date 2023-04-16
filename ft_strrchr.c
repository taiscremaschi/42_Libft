/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:01:19 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:01:19 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	posi;

	posi = ft_strlen(s);
	while (posi >= 0)
	{
		if (s[posi] == ((char)c))
			return ((char *)s + posi);
		posi--;
	}
	return (NULL);
}
/*#include "libft.h"
#include <stdio.h>

int	main(void)
{
    const char *str = "abobor";
    printf("%s\n", ft_strrchr(str, 'a'));
    return (0);
}*/

/*essa funçao indentica a ultima correspondecia de um caracter
passado como parametro dentro de uma str
e retorna um ponteiro para ele */