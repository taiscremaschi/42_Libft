/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/04/12 13:00:47 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:49:11 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s;
	size_t	e;
	char	*new;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	s = i;
	i = ft_strlen(s1);
	while (i > s && ft_strchr(set, s1[i - 1]))
		i--;
	e = i;
	new = ft_substr(s1, s, (e - s));
	return (new);
}
