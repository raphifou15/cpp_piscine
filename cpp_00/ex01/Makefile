# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 04:11:12 by rkhelif           #+#    #+#              #
#    Updated: 2021/11/18 04:11:15 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = contact
CC = clang++
FLAGS = -Wall -Wextra -Werror --std=c++98
RM = rm -rf
SRCS = contact.cpp

OBJS = ${SRCS:.cpp=.o}

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all