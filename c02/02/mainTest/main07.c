/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhotting <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:56:40 by mhotting          #+#    #+#             */
/*   Updated: 2023/08/14 12:35:48 by mhotting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strupcase(char *str);

int	main(int argc, char **argv)
{
	char *str;

	str = (char *)malloc(100 * sizeof(char));
	if (str && argc > 1)
	{
		strcpy(str, argv[1]);
		str =  ft_strupcase(str);
		printf("BEFORE: %s\n", argv[1]);
		printf("AFTER : %s\n", str);
	}
	return (0);
}
