/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfermey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:58:37 by wfermey           #+#    #+#             */
/*   Updated: 2022/04/18 09:51:08 by wfermey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <signal.h>
# include <unistd.h>

typedef struct m_msg
{
	char			c;
	unsigned int	size;
}					t_msg;

/////  SERVEUR  /////
void	get_bit_by_bit(int bit);

/////  CLIENT  /////
void	send_bit_by_bit(int pid, char *str, int len);

/////  UTILS  /////
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(const char *str);
int		ft_strlen(char *str);

#endif
