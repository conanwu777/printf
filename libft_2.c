/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 01:26:44 by cwu               #+#    #+#             */
/*   Updated: 2018/03/20 01:28:15 by cwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strchr(const char *s, int c)
{
	while (*(char*)s)
	{
		if (*(char*)s == (char)c)
			return ((char*)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char*)s);
	return (NULL);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;
	int		i;

	h = (char*)haystack;
	if (*needle == '\0')
		return (h);
	while (*h)
	{
		i = 0;
		n = (char*)needle;
		while (*n && *(h + i++) == *n)
			n++;
		if (!*n)
			return (h);
		h++;
	}
	return (NULL);
}

char	*cw_strchop(char *line, int size)
{
	char	*tmp;
	char	*l;
	int		i;

	if (size == 0)
		return (line);
	if (!line || !(*line))
		return ((char*)malloc(1));
	tmp = ft_strnew(ft_strlen(line) - size + 1);
	l = line;
	line = tmp;
	i = -1;
	while (l[++i + size])
		line[i] = l[i + size];
	ft_strdel(&l);
	return (line);
}

char	*ft_strcpy(char *dst, const char *src)
{
	char *t;

	t = dst;
	while (*src)
		*t++ = *src++;
	*t = '\0';
	return (dst);
}
