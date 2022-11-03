all: main

intruso:
	g++ -c intruso.cpp -o intruso.o
	
main: intruso
	g++ intruso.o main.cpp -o main.out
	
clean:
	rm main.out