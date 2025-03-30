CC = gcc

CFLAGS = -Wall -Wextra -std=c11 -g

TARGET = main

SRCS = main.c linked_list.c

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

gdb: $(TARGET)
	gdb $(TARGET)
