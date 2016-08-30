NAME = triangulo

SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj
BIN_DIR = bin

TARGET = $(BIN_DIR)/$(NAME)

CC = gcc

CFLAGS = -W -Wall -pedantic -MMD -g3
#INCLUDES = -Iinclude -I/usr/local/include/ijengine -Itest `sdl2-config --cflags`
#LIBS = -lijengine `sdl2-config --libs` -lSDL2_image -lSDL2_ttf -lSDL2_mixer

SRC = ${wildcard $(SRC_DIR)/*.c}
OBJ = ${addprefix $(OBJ_DIR)/, ${notdir ${SRC:.c=.o}}}

.PHONY: clean depend dist-clean

all:
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)
	$(MAKE) $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo Building $@
	$(CC) -c $(CFLAGS) $< -o $@

$(TARGET): $(OBJ)
	@echo Building $@
	$(CC) $(OBJ) -o $@

clean:
	@echo Cleaning...
	@find . -name *.o -exec rm {} \;
	@rm -rf *~ *.o prog out.txt

dist-clean: clean
	@find . -name *.a -exec rm {} \;
	@rm -rf $(TARGET)

-include $(OBJ:.o)
