CC     = gcc
CFLAGS = -Wall -Wextra -O0 -g3

AR     = ar
AFLAGS = rvs

TRGT = libmem.a
SRCS = mem.c
OBJS = $(SRCS:.c=.o)
HDRS = $(SRCS:.c=.h)

.PHONY: all clean re install test run

all: $(TRGT)

$(TRGT): $(OBJS)
	$(AR) $(AFLAGS) $(TRGT) $(OBJS)
	@rm -f $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $^

clean:
	@rm -f $(TRGT) $(OBJS) test
	@echo "clean"

re: clean all

install: all
	#@cp $(TRGT) ../client/lib/
	#@cp inc/$(HDRS) ../client/inc/

test: $(TRGT)
	$(CC) $(CFLAGS) test.c -L./ -lmem -o test

run: test
	@./test
