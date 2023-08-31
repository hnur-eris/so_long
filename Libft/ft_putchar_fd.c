/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:52:48 by haeris            #+#    #+#             */
/*   Updated: 2022/08/13 14:40:20 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// file'a c parametresinin çıktısını yazar
// O_CREAT => dosya oluşturur (mevcut değilse)
// O_RDWR => dosyayı hem okuma hem de yazma erişimli açar
// 0777 => bir dosya ya da klasöre okuma, yazma ve çalıştırma yetkisi verir.
/*
#include <fcntl.h>
int main() {
	int fd = open("a.txt", O_CREAT | O_RDWR, 0777);
	ft_putchar_fd('b', fd);
}
*/
