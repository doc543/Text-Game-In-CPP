gamemake: main.cpp Display.cpp Controler.cpp
	g++ -std=c++11 -o testgame main.cpp Display.cpp Controler.cpp -lncurses
