NAME = megaphone

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

CLANG = clang++
FLAGS = -Wall -Wextra -Werror

# %.o : %.cpp
# 	$(CLANG) $(FLAGS) -c $< -o $@

NAME : $(OBJS)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

all : NAME

clean :	
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY : clean fclean all re