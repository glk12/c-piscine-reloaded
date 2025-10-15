/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:45:14 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/15 11:22:45 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*s;
	char	*dest;

	s = (char *)malloc(ft_strlen(src) + 1 * sizeof(char));
	if (!s)
		return (NULL);
	dest = s;
	while (*src)
		*s++ = *src++;
	*s = '\0';
	return (dest);
}
