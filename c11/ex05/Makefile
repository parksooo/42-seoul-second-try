CC = gcc
CFALGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes

NAME = do-op
SRCS = $(SRCDIR)/main.c $(SRCDIR)/checkop.c $(SRCDIR)/returnvalue.c $(SRCDIR)/putnbr.c
OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFALGS) -c $< -o $@ -I $(INCDIR)

$(NAME): $(OBJECTS)
	$(CC) $(CFALGS) -o $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
