/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:52:48 by haeris            #+#    #+#             */
/*   Updated: 2022/08/13 14:42:40 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// f’ fonksiyonunu ‘s’ stringinin bütün karakterlerine uygular. 
// Değiştirlen stringden yeni bir string yaratılır.
/*
char	ft_putstr(unsigned int i, char s)
{
	if (i % 2 == 0)
		return (s - 32);
	else
		return (s);
}
#include <stdio.h>
int main() {
	char *b = "beyza";
	printf("%s", ft_strmapi(b, &my_toupper));
}
*/
