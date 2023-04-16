/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:03:23 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 13:03:23 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*#include "libft.h"
#include <stdio.h>


int	main(void)
{
   printf("%d\n", ft_isdigit('1'));
}*/

/* essa função indenfica se a variavel é um digito*/