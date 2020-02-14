//Serena Evans-Lutterodt
//Daniel Duggan

#include <iostream>
#include <string>
using namespace std;

// empty 3x3 matrix take in an array
//initialize the array with characters
//this is the boards shell
char A[3][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f',}, {'g', 'h', 'i'}}


void CreateBoard(char board[3][3]){ // 
    //creating for loop to generate board
    for(int i=0 ; i<3 ; i++) // row
    {
        for(int j=0 ; j<3 ; j++) //column
        {
            A[i][j] = board[i][j];
            
        }
    }

}
//displaying the board

//function to get the players next move

//set the players move to their location

//switch function for setting the player move and take action

// calls CreateBoard
int main(){
    // here's where we will call the CreateBoard function
    //have both options of characters
    //function going through the options

}

/*
int row;
int col;

	// already implemented for you!
	bool operator==(const Position &other) {
		return row == other.row && col == other.col;

Board::Board()
{
    //Initializing rand() function
    srand(time(NULL));
    
    Position pos;
    pos.row = 0;
    pos.col = 0;
    
    //Generating random board
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            pos.row = i;
            pos.col = j;
            SetBoardValue(pos);
        }
    }
}
*/