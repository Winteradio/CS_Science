CC = g++
TARGET = app.out
OBJS = TestCard.o CreditCard.o

CFLAGS = -Wall -g
LDFLAGS = -lc

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

.cpp.o :
	$(CC) $(CFLAGS) -c -o $@ $< 

clean :
	rm -f $(OBJS) $(TARGET)
