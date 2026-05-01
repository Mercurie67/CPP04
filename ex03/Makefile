NAME = Magic

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

SRC_DIR = src
OBJ_DIR = obj

SRC = $(SRC_DIR)/main.cpp \
      $(SRC_DIR)/AMateria.cpp \
      $(SRC_DIR)/Ice.cpp \
      $(SRC_DIR)/Cure.cpp \
      $(SRC_DIR)/Character.cpp \
	  $(SRC_DIR)/MateriaSource.cpp \
	  $(SRC_DIR)/Floor.cpp

OBJS = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re