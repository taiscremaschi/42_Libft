/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:59:51 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 12:59:51 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/*#include "libft.h"
#include <stdio.h>


int	main(void)
{
   printf("%c\n", ft_toupper('z'));
}*/

/*essa funcao transforma uma letra minuscula em maiuscula. caso não seja,
	ela retorna o a variavel.*/