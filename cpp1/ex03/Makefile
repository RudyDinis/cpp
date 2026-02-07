NAME = Unnecessary_violence

SRC = main.cpp Weapon/Weapon.cpp HumanA/HumanA.cpp HumanB/HumanB.cpp
OBJ := $(SRC:%.cpp=%.o)

CC = g++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all