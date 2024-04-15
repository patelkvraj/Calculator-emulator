CC = g++
CFLAGS = -std=c++17 -Wall -Werror -pedantic -g
PROGRAM = main

all: $(PROGRAM)

$(PROGRAM): main.o $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

#clean:
#	#rm *.o $(PROGRAM)

#lint: 
#	cpplint *.cpp *.hpp

#.PHONY: 
#	all clean lint
