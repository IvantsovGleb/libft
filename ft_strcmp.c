/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsinestr <fsinestr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:17:20 by fsinestr          #+#    #+#             */
/*   Updated: 2022/03/31 18:17:22 by fsinestr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	const char	*s11;
	const char	*s22;

	s11 = s1;
	s22 = s2;
	while (*s11 && (*s11 == *s22))
	{
		s11++;
		s22++;
	}
	return (*(unsigned char *)s11 - *(unsigned char *)s22);
}
