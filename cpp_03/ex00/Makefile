# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 11:50:17 by rkhelif           #+#    #+#              #
#    Updated: 2021/12/08 11:50:20 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = open
CC = clang++
FLAGS = -Wall -Wextra -Werror --std=c++98
RM = rm -rf
SRCS = main.cpp \
		ClapTrap.cpp
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