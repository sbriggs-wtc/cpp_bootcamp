NAME = megaphone
SRC = megaphone.cpp
OBJ = *.o

all:
	clang++ -c -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

test:
	./$(NAME) "The quick brown fox jumps over the lazy dog."