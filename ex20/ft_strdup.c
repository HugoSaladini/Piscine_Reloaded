/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:48:18 by hda-silv          #+#    #+#             */
/*   Updated: 2025/07/15 12:47:22 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		index++;
	}
	return (index);
}

char	ft_copy(char *src, char *copy)
{
	int		i;

	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (0);
}

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = (char *)malloc(ft_len(src) + 1);
	if (!copy)
	{
		return (0);
	}
	ft_copy(src, copy);
	return (copy);
}
