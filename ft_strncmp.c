/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:01:34 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:01:34 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i] || ((s1[i] == '\0') || s2[i] == '\0'))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*#include "libft.h"
#include <stdio.h>


int	main(void)
 {
    const char *s1 = "tatazinha";
    const char *s2 = "tataZ"; 

    printf("%d\n", ft_strncmp(s1, s2, 5));
    return (0);
 }*/
/*essa funçao  compara duas strs e retorna a diferença pela tabela ascii delas,
	senao retorna 0*/