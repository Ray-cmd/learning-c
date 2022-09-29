/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_isalpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:43:33 by lray              #+#    #+#             */
/*   Updated: 2022/09/29 15:44:54 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	err;

	(void)argv;
	err = 0;
	i = 0;
	while (i <= 10000)
	{
		if (argc >= 2)
			printf("Test #%d \t|\tft_isalpha(%c) = %d [STD] = %d.\n"\
					, i, i, ft_isalpha(i), isalpha(i));
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("[ERR] char = %c / %d | ft_isalpha = %d - isalpha = %d.\n"\
					, i, i, ft_isalpha(i), isalpha(i));
			err++;
		}
		i++;
	}
	printf("Test finish with %d error(s).\n", err);
}
