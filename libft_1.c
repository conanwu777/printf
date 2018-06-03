/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 10:43:51 by cwu               #+#    #+#             */
/*   Updated: 2018/05/12 17:13:52 by cwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi(const char *str)
{
	int sum;
	int sign;

	sum = 0;
	sign = 1;
	while ((*str == ' ') || (*str == '\t') || (*str == '\v') ||
	(*str == '\n') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		sum = sum * 10 + sign * (*str++ - '0');
	return (sum);
}

int		ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

size_t	ft_strlen(const char *s)
{
	int l;

	l = 0;
	while (*s++)
		l++;
	return (l);
}

char	*ft_strnew(size_t size)
{
	char *t;
	char *u;

	if (!(t = (char *)malloc(size + 1)))
		return (NULL);
	u = t;
	while (size--)
		*u++ = '\0';
	*u = '\0';
	return (t);
}

void	ft_strdel(char **as)
{
	if (as && *as)
		free(*as);
	if (as)
		*as = NULL;
}
