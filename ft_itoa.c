/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:03:14 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:03:14 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*sizei é para descobrir o tamanho da minha alocação (ex:
		-23 precisa de 3 espaços + o nulo)*/
static int	sizei(int n)
{
	int	x;

	x = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		x++;
		n *= -1;
	}
	while (n != 0)
	{
		n = n / 10;
		x++;
	}
	return (x);
}

static void	exception(int *n, char *new)
{
	if (*n == 0)
		new[0] = '0';
	else
	{
		new[0] = '-';
		new[1] = '2';
		*n = 147483648;
	}
}

char	*ft_itoa(int n)
{
	char	*new;
	int		posi;

	posi = (sizei(n));
	new = malloc((sizei(n) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	if (n == 0 || n == -2147483648)
	{
		exception(&n, new);
	}
	else if (n < 0)
	{
		new[0] = '-';
		n *= -1;
	}
	new[posi--] = '\0';
	while (n > 0)
	{
		new[posi] = n % 10 + '0';
		n = n / 10;
		posi--;
	}
	return (new);
}
/*int main()_itoa(0);
    printf("%s\n", x);
    return(0);
    x = ft_itoa(-23);
    printf("%s\n", x);
    return(0);
}
*/

/*a funcao transforma um int em um char */