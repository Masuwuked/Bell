CC = gcc
CFLAGS = -Wall -Werror -g
LDFLAGS = 
TARGET = bell

$(TARGET): $(TARGET).c
	$(CC) $(CDFLAGS) $(LDFLAGS) -o $(TARGET) $(TARGET).c

install: $(TARGET)
	install -m 755 