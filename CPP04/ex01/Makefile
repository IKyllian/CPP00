NAME = Polymorphism

HEADER = Animal.hpp \
		 Dog.hpp \
		 Cat.hpp \
		 Brain.hpp
SRCS = main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp
OBJS = $(SRCS:.cpp=.o)

CLANG = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

%.o : %.cpp $(HEADER)
	$(CLANG) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(HEADER)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :	
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean all re