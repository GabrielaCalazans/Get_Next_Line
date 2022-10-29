/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <gacalaza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:17:41 by gacalaza          #+#    #+#             */
/*   Updated: 2022/10/28 01:13:59 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*strnew;
	size_t	len_s1;
	size_t	len_s2;
	int		i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	strnew = (char *) malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!strnew)
		return (NULL);
	i = -1;
	if (s1)
	{
		while (s1[++i] && s1)
			strnew[i] = s1[i];
	}
	i = -1;
	while (s2[++i] && s2)
	{
		strnew[len_s1] = s2[i];
		len_s1++;
	}
	strnew[len_s1] = '\0';
	free (s1);
	return (strnew);
}

char	*ft_strchr(const char *str, int c)
{
	int	count;
	int	size;

	size = ft_strlen(str);
	count = 0;
	if (count == size)
		return ((char *)str);
	while (count < size)
	{
		if (str[count] == (unsigned char)c)
			return ((char *)str + count);
		count++;
	}
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (NULL);
}
