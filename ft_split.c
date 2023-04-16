/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:02:30 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:50:00 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont(char const *s, char c)
{
	int	x;
	int	result;

	x = 0;
	result = 0;
	while (s[x] != '\0')
	{
		if (s[x] != c && ((s[x + 1]) == c || (s[x + 1]) == '\0'))
		{
			x++;
			result++;
		}
		else
			x++;
	}
	return (result);
}

static char	*word(const char *str, char c)
{
	int		i;
	char	*src;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	src = malloc(sizeof(char) * (i + 1));
	if (src == NULL)
		return (NULL);
	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		src[i] = str[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}

char	**ft_split(char const *s, char c)
{
	char	**totals;
	int		x;
	int		y;

	totals = malloc(sizeof(char *) * (cont(s, c) + 1));
	if (totals == NULL)
		return (NULL);
	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		if (s[x] != c)
		{
			totals[y] = word(&s[x], c);
			y++;
			while (s[x] != c && s[x] != '\0')
				x++;
		}
		else
			x++;
	}
	totals[y] = NULL;
	return (totals);
}

/*int main()
{
    char  *s = "tais*lala*janta";
    char    **str;
    
    str = ft_split(s, '*');
    printf("%p\n", str);
    printf("%p\n", s);
    printf("%s\n", str[0]);
    printf("%s\n", str[1]);
    printf("%s\n", str[2]);
    printf("%p\n", str[3]);
    return(0);
}*/
/*essa funcao eeh uma array de poiters*/