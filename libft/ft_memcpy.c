/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:59:45 by mandrade          #+#    #+#             */
/*   Updated: 2021/02/10 17:51:37 by mandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *dest;
    unsigned char *source;
    
    dest = (unsigned char*)dst;
    source = (unsigned char*)src;
    if (!dest && !source)
        return (0);
    while (n-- > 0)
    {
        *dest++ = *source++;
    }
    return (dst);
}
