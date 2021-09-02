NAME = ex02

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

CLANG = clang++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

%.o : %.cpp
	$(CLANG) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :	
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean all re