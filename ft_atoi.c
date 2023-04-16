/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/04/12 12:27:39 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 12:27:39 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	x;
	int	signal;
	int	result;

	signal = 1;
	result = 0;
	x = 0;
	while (ptr[x] == ' ' || (ptr[x] >= 9 && ptr[x] <= 13))
		x++;
	if (ptr[x] == '-')
	{
		signal = signal * -1;
		x++;
	}
	else if (ptr[x] == '+')
		x++;
	while (ptr[x] >= '0' && ptr[x] <= '9')
	{
		result *= 10;
		result = result + ptr[x] - '0';
		x++;
	}
	return (signal * result);
}
/*#include "libft.h"
#include <stdio.h>

int	main(void)
{
    printf("%d\n", ft_atoi("     +1258cf"));
}*/

/*a funcao atoi converte um char em um int*/
