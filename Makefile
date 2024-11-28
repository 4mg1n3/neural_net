

CC 	   = gcc
CFLAGS = -Wall -Wextra -g
TARGET = neural_net
SRCS   = main.c src/matmul.c
OBJS   = $(SRCS:.c=.o)


all: $(TARGET)


$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

