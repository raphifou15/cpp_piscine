# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 15:19:59 by rkhelif           #+#    #+#              #
#    Updated: 2021/11/30 15:20:14 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Karen
CC = clang++
FLAGS = -Wall -Wextra -Werror --std=c++98
RM = rm -rf
SRCS = main.cpp \
		Karen.cpp

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

.PHONY : all clean fclean re
