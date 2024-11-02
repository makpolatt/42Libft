/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makpolat <makpolat@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:52:06 by makpolat          #+#    #+#             */
/*   Updated: 2024/10/30 17:42:47 by makpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <fcntl.h>
// int main()
// {
// 	int fd;

// 	fd = open("deneme.txt", O_CREAT | O_RDWR, 0700);
// 	ft_putstr_fd("Muhammed Emre AKPOLAT", fd);
// }