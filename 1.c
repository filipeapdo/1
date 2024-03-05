/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:45:16 by fiaparec          #+#    #+#             */
/*   Updated: 2022/02/20 10:46:55 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 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

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	printf("\n\nargc = %d\n", argc);
	while (i < argc)
	{
		printf("argv[%d] = %s\n", i, *(argv + i));
		i++;
	}
	printf("\n\n");
	return (0);
}
