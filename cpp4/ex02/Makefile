NAME = Abstract_class

SRC = main.cpp Animal/Animal.cpp Dog/Dog.cpp Cat/Cat.cpp WrongCat/WrongCat.cpp WrongAnimal/WrongAnimal.cpp Brain/Brain.cpp
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