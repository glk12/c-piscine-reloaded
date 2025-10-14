/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:13:08 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/14 13:30:55 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(str);
		str++;
	}
}
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int	count;

		count = 1;
		while(count < argc)
		{
			ft_putstr(argv[count++]);
			ft_putchar("\n");
		}
	}
	return (0);
}
