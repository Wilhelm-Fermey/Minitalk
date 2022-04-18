/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:00:05 by wfermey           #+#    #+#             */
/*   Updated: 2022/04/18 09:50:14 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bit_by_bit(int pid, char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < 7)
		{
			if ((str[i] >> j) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			j++;
			usleep(100);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	len;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		len = ft_strlen(argv[2]);
		send_bit_by_bit(pid, argv[2], len);
	}
	else
		ft_putstr("Error\n");
}
