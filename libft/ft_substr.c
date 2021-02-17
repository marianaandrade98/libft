/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandrade <mandrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:58:46 by mandrade          #+#    #+#             */
/*   Updated: 2021/02/17 19:33:27 by mandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	size;

	if (!s || !len)
		return (NULL);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	size = 0;
	while (start < ft_strlen(s) && size < len)
	{
		p[size] = s[start];
		size++;
		start++;
	}
	p[size] = '\0';
	return (p);
}
