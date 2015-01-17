CC		=	g++

RM		=	rm -f

NAME		=	cpp_santa

SRCS_PATH	=	sources/

HHS_PATH	=	headers/

SRCS		=	main.cpp \
			$(SRCS_PATH)LittlePony.cpp \
			$(SRCS_PATH)Object.cpp \
			$(SRCS_PATH)Teddy.cpp \
			$(SRCS_PATH)Toy.cpp \
			$(SRCS_PATH)Wrap.cpp \
			$(SRCS_PATH)Box.cpp \
			$(SRCS_PATH)GiftPaper.cpp \
			$(SRCS_PATH)Table.cpp \

OBJS		=	$(SRCS:.cpp=.o)

CXXFLAGS	+=	-W -Wall -Wextra -Werror -I $(HHS_PATH)

all:			$(NAME)

$(NAME):		$(OBJS)
			$(CC) $(OBJS) -o $(NAME) $(LDFLAGS) $(CXXFLAGS)

clean:
			$(RM) $(OBJS)

fclean:			clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
