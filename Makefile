CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: TicTacToe

clean:
	rm TicTacToe

TicTacToe: TicTacToe.cpp
	$(CXX) $(CXXFLAGS) TicTacToe.cpp -o TicTacToe