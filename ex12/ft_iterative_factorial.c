/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:09:27 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/15 11:43:02 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	val;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	val = 1;
	while (nb > 1)
		val *= nb--;
	return (val);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(5));
}
*/
