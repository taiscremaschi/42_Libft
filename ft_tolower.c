/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:00:00 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:00:00 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
/*#include "libft.h"
#include <stdio.h>


int	main(void)
{
   printf("%c\n", ft_tolower('z'));
}

essa funcao transforma uma letra maiuscula em minuscula. caso não seja,
	ela retorna o valor da variavel.*/