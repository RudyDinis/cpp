NAME = ex02

SRC = main.cpp Bureaucrat/Bureaucrat.cpp AForm/AForm.cpp \
		ShrubberyCreationForm/ShrubberyCreationForm.cpp
OBJ := $(SRC:%.cpp=%.o)

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all