/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:33:11 by ahouari           #+#    #+#             */
/*   Updated: 2022/01/03 10:12:29 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*tmp;

	i = 0;
	if (!s || !f)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!tmp)
		return (NULL);
	while (i < (size_t)ft_strlen((char *)s))
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
