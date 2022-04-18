# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfermey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 11:06:19 by wfermey           #+#    #+#              #
#    Updated: 2022/04/18 09:48:58 by wfermey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = 	server

NAME2 = 	client

FLAGS =		-Wall -Wextra -Werror

all: 		${NAME1} ${NAME2}

${NAME1}:	
			gcc ${FLAGS} server.c minitalk_utils.c -o ${NAME1}

${NAME2}:
			gcc ${FLAGS} client.c minitalk_utils.c -o ${NAME2}

clean:		
			rm ${NAME1} 
			rm ${NAME2} 
fclean:		
			rm ${NAME1} 
			rm ${NAME2} 

re:	fclean all	
