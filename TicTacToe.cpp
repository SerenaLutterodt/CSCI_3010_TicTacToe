//Serena Evans-Lutterodt
//Daniel Duggan
    // Daniel should get extra credit becuse he stepped up to be my partner when no one else would -S

#include <iostream>
#include <string>
using namespace std;

// empty 3x3 matrix take in an array
//initialize the array with characters
//this is the boards shell
char A[3][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f',}, {'g', 'h', 'i'}};


void CreateBoard(char board[3][]){ // 
    //creating for loop to generate board
    for(int i=0 ; i<3 ; i++) // row
    {
        for(int j=0 ; j<3 ; j++) //column
        {
            A[i][j] = board[i][j];
            //creating the visual boundries of the board
            //using salt for bounds because it's late 
            cout<< "🧂" << A[i][j]; //visual bound for the columns
            
        }
         cout<< "🧂" << A[i][j]; //visual bound for the rows
    }

}

void DisplayBoard(char board[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << " | " << board[i][j];
        }
        cout << " | " << endl;
    }
}

//displaying the board

//displaying the board--> repeating basically what is above
void DisplayBoard(char board[][3]){
    //creating for loop to generate board
    for(int i=0 ; i<3 ; i++) // row
    {
        for(int j=0 ; j<3 ; j++) //column
        {
             //creating the visual boundries of the board
            //using salt for bounds because it's late 
            cout<< "🧂" << A[i][j]; //visual bound for the columns
        }
         cout<< "🧂" << A[i][j]; //visual bound for the rows
    }

}
//function to get the players next move
char GetPlayerChoice(){ //had to change data type to char to allow a return function
    //initializing the location we are going to request-> data type relating to 
    char location;
    // ask for users choice in location for their turns move
    cout<< "Your Turn! Where would you like to move? ";
    cin >> location; //taking in move
    //return location
    return location;
}
//set the players move to their location

//switch function for setting the player move and take action

// calls CreateBoard
int main(){
    // here's where we will call the CreateBoard function
    //have both options of characters
    //function going through the options
    DisplayBoard(A);

}