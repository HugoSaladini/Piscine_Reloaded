/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:41:42 by hda-silv          #+#    #+#             */
/*   Updated: 2025/07/18 17:31:27 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"
#include "../includes/ft_read_file.h"

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putendl("Too many arguments.");
	}
	else if (argc < 2)
	{
		ft_putendl("File name missing.");
	}
	else
	{
		ft_print_file(argv[1]);
	}
	return (0);
}
