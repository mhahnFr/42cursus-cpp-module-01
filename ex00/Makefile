NAME = BraiiiiiiinnnzzzZ

SRC = Zombie.cpp main.cpp  newZombie.cpp randomChump.cpp

HDR = Zombie.h

OBJ = $(SRC:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(LDFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	- $(RM) $(OBJ)

fclean: clean
	- $(RM) $(NAME)

re: fclean
	$(MAKE)

.PHONY: re fclean clean all