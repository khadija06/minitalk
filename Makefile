# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 17:47:41 by knabeel           #+#    #+#              #
#    Updated: 2023/03/01 18:47:31 by knabeel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

serverSRC = server.c server_utils.c
clientSRC =	client.c client_utils.c


SERVEROBJ = $(serverSRC:.c=.o)
CLIENTOBJ = $(clientSRC:.c=.o)

RM 		= 		rm -rf
CC 		= 		gcc
CFLAGS		= -Wall -Wextra -Werror

all : 		server client


server :	$(SERVEROBJ)
			$(CC) $(CFLAGS) $(SERVEROBJ) -o server


client : 	$(CLIENTOBJ)
			$(CC) $(CFLAGS) $(CLIENTOBJ) -o client



clean :
		$(RM) $(SERVEROBJ) $(CLIENTOBJ) 
fclean :	clean
		$(RM) server client 

re : 	fclean  all


.PHONY: all clean fclean re 