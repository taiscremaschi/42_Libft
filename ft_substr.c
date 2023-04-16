/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/04/12 13:01:05 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:51:36 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
	{
		new = malloc(1);
		*new = '\0';
		return (new);
	}
	if (ft_strlen(s) - start >= len)
		new = (char *)malloc(sizeof(char) * len + 1);
	else
		new = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!new)
		return (NULL);
	while (s[start] && i < len && start < ft_strlen(s))
	{
		new[i++] = s[start++];
	}
	new[i] = '\0';
	return (new);
}
/*int main()
{
    char    *s = "tatazinha 123";
    char    *x;
    char    *y;
    

    x = ft_substr(s, 2, 8);
    printf("%s\n", x);
    y = ft_memset(x, 'o', 6);
    printf("%s\n", y);
    return(0);
}*/
