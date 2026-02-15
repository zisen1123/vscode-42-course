CC=gcc
CFLAGS=-Wall -Wextra -Werror -g

BIN_DIR=bin
SRC_DIR=src

TARGETS=$(BIN_DIR)/temp_convert $(BIN_DIR)/max_min $(BIN_DIR)/char_count

all: $(TARGETS)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/temp_convert: $(SRC_DIR)/temp_convert.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/max_min: $(SRC_DIR)/max_min.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/char_count: $(SRC_DIR)/char_count.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BIN_DIR)
