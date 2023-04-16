/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:52:57 by marvin            #+#    #+#             */
/*   Updated: 2023/04/12 12:48:42 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char    c[5] = "tata";
    int i;

    i = 0;
    ft_bzero(c, 4);
    while (i < 3)
    {
        i++;
        if (c[i] != '\0')
        {
            printf("error\n");
            return (0);
        }
    }
    printf("ok\n");
    return (0);
}*/

/*a função coloca nulos em n espaços de uma str*/
