/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:03:18 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:03:18 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include "libft.h"
#include <stdio.h>


int	main(void)
{
   printf("%d\n", ft_isprint('1'));
}*/

/*essa função indentifica a variavel é um numero printavel da tab ascii*/