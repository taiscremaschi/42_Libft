/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:01:42 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:50:46 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	char	*new;	

	x = ft_strlen(s);
	new = malloc(sizeof(char) * (x + 1));
	if (new == NULL)
		return (NULL);
	x = 0;
	while (s[x] != '\0')
	{
		new[x] = f(x, s[x]);
		x++;
	}
	new[x] = '\0';
	return (new);
}
