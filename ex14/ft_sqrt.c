/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:24:00 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/15 11:13:42 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 0;
	while (count < nb)
	{
		if (count * count == nb)
			return (count);
		count++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_sqrt(144));
}
*/
