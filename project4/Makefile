SRC_DIR := src
SOURCES := x.c y.c z.c

SOURCES_LIST := $(addprefix $(SRC_DIR)/, $(SOURCES))

OBJECTS := $(SOURCES:.c=.o)
FOUND_SOURCES := $(wildcard $(SRC_DIR)/*.c)

all:
	@echo SOURCES=$(SOURCES)
	@echo OBJECTS=$(OBJECTS)
	@echo SOURCES_LIST=$(SOURCES_LIST)

	@echo FOUND_SOURCES=$(FOUND_SOURCES)


create_srcs: $(SRC_DIR) $(SOURCES_LIST)
	echo $(SOURCES_LIST)	

	
$(SRC_DIR)/%.c:
	touch $@

$(SRC_DIR):
	mkdir -p $@
