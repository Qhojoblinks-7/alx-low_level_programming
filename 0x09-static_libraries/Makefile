CC := gcc
CFLAGS := -Wall -Wextra -pedantic -Werror
SRC := 0-isupper.c 0-memset.c 0-strcat.c 100-atoi.c \
       1-isdigit.c 1-memcpy.c 1-strncat.c \
       2-strchr.c 2-strlen.c 2-strncpy.c \
       3-islower.c 3-puts.c 3-strcmp.c 3-strspn.c \
       4-isalpha.c 4-strpbrk.c \
       5-strstr.c \
       6-abs.c \
       9-strcpy.c \
       _putchar.c

OBJ := $(SRC:.c=.o)
LIB := libmy.a

.PHONY: all clean

all: $(LIB)

$(LIB): $(OBJ)
	ar rcs $(LIB) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(LIB)

