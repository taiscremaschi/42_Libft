/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:03:28 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:03:28 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include "libft.h"
#include <stdio.h>


int	main(void)
{
   printf("%d\n", ft_isascii('1'));
}*/

/*essa função indentifica se a variavel pertence a tabela ascii*/