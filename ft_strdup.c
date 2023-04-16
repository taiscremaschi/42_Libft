/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:02:21 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:47:41 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	totalsize;

	totalsize = (ft_strlen(s) + 1);
	new = malloc(totalsize);
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s, totalsize);
	return (new);
}

/*int main()
{
    const char    *s = "tatazinhalinda";
    char    *x;

    x = ft_strdup(s);
    printf("%s\n", x);
    printf("%p\n", s);
    printf("%p\n", x);
    return(0);
}*/
