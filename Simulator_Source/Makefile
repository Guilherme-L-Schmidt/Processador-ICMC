all:
	g++ main.cpp View.cpp Controller.cpp Sound.cpp Model.cpp -O3 -march=native -o sim `pkg-config --libs --cflags gtk+-2.0` -pthread -Wall -lgthread-2.0 -lSDL2
