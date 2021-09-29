SRC:=src
INC:=inc
OBJ:=obj
BIN:=bin
DEPS:=$(INC)

OBJS := $(wildcard $(OBJ)/*.o)
SRCS := $(wildcard $(SRC)/*.c)

CFLAGS=-Wall -g -O0

ifeq ($(CC), cc)
	CC := gcc
endif

$(BIN)/reciprocal: $(OBJ)/main.o $(OBJ)/reciprocal.o 
#$(BIN)/reciprocal: $(OBJS)
	echo $(OBJS)
	$(CC) -o $@ $^ 

$(OBJ)/%.o: $(SRC)/%.c $(DEPS) 
	$(CC) $(CFLAGS) -c -o $@ $< -I$(INC)

clean:
	-rm -rf $(OBJ)/* $(BIN)/*

info:
	@echo DEPS=$(DEPS)
	echo $(SRCS)
	echo $(OBJS)

.PHONY: clean info
