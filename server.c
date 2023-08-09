/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:58:01 by knabeel           #+#    #+#             */
/*   Updated: 2023/03/01 18:58:54 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	receive_message(int sig)
{
	static int	n;
	static int	byte;

	if (sig == SIGUSR1)
		byte += 1 << (7 - n);
	if (sig == SIGUSR2)
		byte += 0 << (7 - n);
	n++;
	if (n == 8)
	{
		ft_putchar(byte);
		n = 0;
		byte = 0;
	}
}

int	main(void)
{
	ft_putstr("welcome to Khadija's server!\n");
	ft_putstr("pid is :");
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, receive_message);
	signal(SIGUSR2, receive_message);
	while (1)
		pause();
}
