CC = gcc
CFLAGS = -Wall -Werror -g
LDFLAGS = 
TARGET = bell

$(TARGET): $(TARGET).c
	$(CC) $(CDFLAGS) $(LDFLAGS) -lncurses -o $(TARGET) $(TARGET).c

install: 
	make
	cp bell /usr/local/bin/bell
clean:
	rm -f $(OBJS) $(TARGET)