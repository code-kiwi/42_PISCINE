/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:40:52 by mhotting          #+#    #+#             */
/*   Updated: 2023/08/15 10:41:47 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str != '\0')
	{
		cpt++;
		str++;
	}
	return (cpt);
}
