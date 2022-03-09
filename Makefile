runProgram: main.o sort.o
	g++ main.o sort.o

main.o: main.cpp 
	g++ -c main.cpp

sort.o: sort.cpp
	g++ -c sort.cpp

clean: 
	rm main.o sort.o a.out

