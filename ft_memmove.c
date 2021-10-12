/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:04:32 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/12 18:43:25 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char tmp[n];

	if (!dest && !src)
		return (NULL);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	return (dest);
}
