NAME = human

HEADER = Weapon.hpp \
		 HumanA.hpp \
		 HumanB.hpp
SRCS = main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp
OBJS = $(SRCS:.cpp=.o)

CLANG = clang++
FLAGS = -Wall -Wextra -Werror
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