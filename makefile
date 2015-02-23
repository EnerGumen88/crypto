CFLAGS = -Wall

all : key

key : key.o
	gcc $(CFLAGS) -o key key.o

clean :
	rm *.o key

doc :
	@doxygen -g
	@doxygen
