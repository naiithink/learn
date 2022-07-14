SYSTEM := $(shell uname -m | awk '{ print tolower($$0) }')-$(shell uname -s | awk '{ print tolower($$0) }')
LIB_NAME = libmod.$(SYSTEM).a
CC := clang
INCLUDE_DIR = include
SOURCE_DIR = src
BUILD_DIR = build
LIB_DIR := $(BUILD_DIR)/$(SYSTEM)/lib
OBJ_DIR := $(BUILD_DIR)/$(SYSTEM)/obj
TARGET := $(LIB_DIR)/$(LIB_NAME)
TEST_DIR := test
TEST_BIN_DIR := $(TEST_DIR)/bin
TEST_FILE := tester.c

.PHONY: all clean FORCE

all: $(TARGET)
	@echo "$(TARGET)"

test: $(TARGET)
	mkdir -p $(TEST_BIN_DIR)
	@$(CC) -I$(INCLUDE_DIR) -L$(LIB_DIR) $(TEST_DIR)/$(TEST_FILE) -o $(TEST_BIN_DIR)/$(SYSTEM).$(basename $(TEST_FILE)) -lmod.$(SYSTEM)
	./$(TEST_BIN_DIR)/$(SYSTEM).$(basename $(TEST_FILE))

$(TARGET): $(OBJ_DIR)/mod1.o $(OBJ_DIR)/mod2.o $(OBJ_DIR)/test.o
	@ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SOURCE_DIR)/%.c config
	@$(CC) -c $< -o $@

config:
	@mkdir -p $(LIB_DIR) $(OBJ_DIR)

clean:
	rm -rf $(BUILD_DIR)/$(SYSTEM)
	rm -f $(TEST_BIN_DIR)/$(SYSTEM).$(basename $(TEST_FILE))
