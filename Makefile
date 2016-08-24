CC = gcc
CFLAGS = -Wall

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# linked_list compile
LL_OBJS = linked_list.o linked_list_test.o
$(LL_OBJS): linked_list.h

linked_list_test: linked_list.o linked_list_test.o
	$(CC) $(CFLAGS) -o $@ $^
