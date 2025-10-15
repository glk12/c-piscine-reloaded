/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:30:20 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/15 11:35:24 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	y;
	int	count;

	i = 1;
	while (i < argc - 1)
	{
		y = 0;
		while (y < argc - i)
		{
			if (ft_strcmp(argv[y], argv[y + 1]) > 0)
				ft_swap(&argv[y], &argv[y + 1]);
			y++;
		}
		i++;
	}
	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count++]);
		ft_putchar('\n');
	}
	return (0);
}
