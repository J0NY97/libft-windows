/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:32:52 by jsalmi            #+#    #+#             */
/*   Updated: 2019/10/26 16:45:57 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_bzero(void *str, size_t n)
{
	int		i;
	char	*strstr;

	strstr = (char *)str;
	i = 0;
	while (n--)
	{
		strstr[i] = '\0';
		i++;
	}
}
