node: main.o node.o
	g++ -o node main.o node.o

node.o: ../header/node.hpp ../source/node.cpp
	g++ -c -o node.o node.cpp

main.o: ../header/node.hpp main.cpp
	g++ -c -o main.o main.cpp


clean:
	rm -f node.o main.o node