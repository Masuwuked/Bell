CC = gcc
CFLAGS = -Wall -Werror -g
LDFLAGS = 
TARGET = bell

$(TARGET): $(TARGET).c
	$(CC) $(CDFLAGS) $(LDFLAGS) -lncurses -o $(TARGET) $(TARGET).c

install: $(TARGET)
	install -m 755 $(TARGET) /usr/local/bin
clean:
	rm -f $(OBJS) $(TARGET)