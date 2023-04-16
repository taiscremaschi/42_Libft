/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:57:06 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 12:57:06 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*#include "libft.h"
#include <stdio.h>


int	main(void)
{
   printf("%d\n", ft_isalnum('1'));
}*/
/*essa função indentifica se a variavel é uma letra ou um numero*/
