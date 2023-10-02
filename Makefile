
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror -std=c99
TARGET	:= libft.a
INCLUDE := include/
SRCS	:= $(wildcard src/*.c)
OBJS	:= $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	ar -rv $(TARGET) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $< -I $(INCLUDE) -o $@

clean:
	rm *.o *.gch