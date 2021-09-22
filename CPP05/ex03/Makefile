NAME = bureaucrat

HEADER = Bureaucrat.hpp \
		 Form.hpp \
		 ShrubberyCreationForm.hpp \
		 RobotomyRequestForm.hpp \
		 PresidentialPardonForm.hpp \
		 Intern.hpp

SRCS =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp
		
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