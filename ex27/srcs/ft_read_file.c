/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:03:54 by hda-silv          #+#    #+#             */
/*   Updated: 2025/07/18 17:42:03 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "../includes/ft_utils.h"

int	ft_open_file(char *file_name)
{
	int	fd;

	fd = open(file_name, O_RDONLY);
	return (fd);
}

void	ft_print_file(char *file_name)
{
	char	c;
	int		fd;

	fd = ft_open_file(file_name);
	while (read(fd, &c, 1) > 0)
		ft_putchar(c);
	close(fd);
}
