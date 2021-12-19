# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 19:27:13 by rkhelif           #+#    #+#              #
#    Updated: 2021/12/18 19:27:15 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface_recap
CC = clang++
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS = main.cpp \
		Bureaucrat.cpp


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
