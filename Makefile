CFLAGS=-Werror -Wextra
VPATH=src/
SRC=$(wildcard src/*.c)

all: bin/tchess

bin/:
	mkdir -p bin/

bin/tchess: $(SRC) | bin/
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: clean
clean:
	rm -r bin/

.PHONY: install
install: bin/tchess
	cp bin/tchess /usr/local/bin/tchess
