CC = gcc

proj := test
SRC_DIR := src
OBJ_DIR := obj

# list of all source files (subdirectory name is includded in each name: src/file0.c src/file1.c ...)
src = $(wildcard $(SRC_DIR)/*.c)

#basename function removes suffix (.o) in each filename
obj := $(basename $(src))

#notdir function removes directory name in each filename
obj := $(notdir $(obj))

#addprefix function adds prefix obj/ to each filename 
obj := $(addprefix $(OBJ_DIR)/, $(obj))

#addsuffix function adds suffix .o to each filename
obj := $(addsuffix .o, $(obj))

$(proj): $(OBJ_DIR) $(obj)
	@echo dep = $(obj)
	@echo objs = $(filter-out $(OBJ_DIR), $^)
	@echo all dependencies = $^
	

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	echo compiling $< to $@
	$(CC) -c $< -o $@

create: $(SRC_DIR)
	@echo creating source files in $(SRC_DIR)
	@echo "int main() {return 0;}" >$(SRC_DIR)/file0.c
	@echo "int main() {return 1;}" >$(SRC_DIR)/file1.c
	@echo "int main() {return 2;}" >$(SRC_DIR)/file2.c
	@echo created files : $(src)
	@echo obj : $(obj)
	find .

# multiple targets (so you do not need to replicate rules for each target)
$(SRC_DIR) $(OBJ_DIR):
	@echo creating directory $@ 
	@-mkdir -p $@ 


clean:
	rm -rf $(SRC_DIR) $(OBJ_DIR)

show:
