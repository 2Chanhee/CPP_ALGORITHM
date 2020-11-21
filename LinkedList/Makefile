all: list.o main.o list.exe

list.o: list.cpp list.hpp
	g++ -c list.cpp list.hpp

main.o: main.cpp list.hpp
	g++ -c main.cpp list.hpp

list.exe: main.o list.o
	g++ -o list.exe main.o list.o

clean:
	rm -f main.o list.o list.exe