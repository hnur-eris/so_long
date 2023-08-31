/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:52:48 by haeris            #+#    #+#             */
/*   Updated: 2022/08/13 14:40:30 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
		while (*s != '\0')
			ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}
// ‘s’ string çıktısını sonunda new line karakteriyle
// verilen file descriptora yazar.
/*
#include <fcntl.h>
int main() {
	int fd = open("putendl.txt", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd("beyza", fd);
	ft_putendl_fd("42", fd);
}
*/
