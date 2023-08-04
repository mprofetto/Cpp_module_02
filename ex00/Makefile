# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 12:39:52 by mprofett          #+#    #+#              #
#    Updated: 2023/08/03 14:32:14 by mprofett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ./firstOrthodoxClass

SRC			= main.cpp Fixed.cpp

OBJ			= ${SRC:.cpp=.o}

CC			= g++

RM			= rm -rf

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
