/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:48:39 by knabeel           #+#    #+#             */
/*   Updated: 2023/03/01 19:40:57 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_putstr(char *s);
void	ft_putchar(char c);
int		ft_isalpha(char *c);
void	send_messege(char c, int pid);
int		check_pid(int pid, char *av);
size_t	ft_strlen(const char *s);
void	ft_putnbr(int d);
void	receive_message(int sig);

#endif