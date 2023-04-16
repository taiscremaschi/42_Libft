/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:02:15 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:02:15 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		totalsize;
	char	*cat;
	int		x;

	x = 0;
	totalsize = (ft_strlen(s1) + ft_strlen(s2));
	cat = malloc(totalsize + 1);
	if (cat == NULL)
		return (NULL);
	totalsize = 0;
	while (s1[x] != '\0')
		cat[totalsize++] = s1[x++];
	x = 0;
	while (s2[x] != '\0')
		cat[totalsize++] = s2[x++];
	cat[totalsize] = '\0';
	return (cat);
}
/*int main()
{
    char    *s1 = "tata";
    char    *s2 = "linda";
    char    *x;

    x = ft_strjoin(s1, s2);
    printf("%s\n", x);
    return(0);
}
*/