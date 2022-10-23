CC = gcc
OBJS = logic.o main.o parsing_map.o etc_util.o logic_plus.o main_plus.o str_util.o
NAME = bsq
TARGET = $(NAME)
CFAGS = -Wall -Wextra -Werror

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFAGS) -o $@ $(OBJS)

clean : $(OBJS)
	rm -f $^

fclean : clean
	rm -f $(TARGET)

re :
	make fclean; make all
