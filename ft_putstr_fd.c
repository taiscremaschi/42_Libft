/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:02:34 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/04/12 15:00:42 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	x = 0;
	while (s[x] != '\0')
		ft_putchar_fd(s[x++], fd);
}
/*int main()
{
    char *s = "tatazinha";

    ft_putstr_fd(s, 1);
    write(1, "\n", 1);
    return(0);
}*/
