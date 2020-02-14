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


void CreateBoard(char board[3][3]){ // 
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
         cout<< "🧂"; //visual bound for the rows
    }

}

//place marker function
void PlaceMarker(char move, char marker){

    int c = 0;
    int r = 0;

    switch (move){
        case 'a':
            r = 0; c = 0;
            break;
        case 'b':
            r = 0; c = 1;
            break;
        case 'c':
            r = 0; c = 2;
            break;
        case 'd':
            r = 1; c = 0;
            break;
        case 'e':
            r = 1; c = 1;
            break;
        case 'f':
            r = 1; c = 2;
            break;
        case 'g':
            r = 2; c = 0;
            break;
        case 'h':
            r = 2; c = 1;
            break;
        case 'i':
            r = 2; c = 2;
            break;
    }

    A[r][c] = marker;
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
            cout<< "🧂" << board[i][j]; //visual bound for the columns
        }
         cout << "🧂"; //visual bound for the rows
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

    //  initalizing two options for the game
    char X; // X option
    char O; // O not zero, option

    // calling board function with input array to connect parts
    CreateBoard(A);

    //creating loop for the 9 iterations of the turns
    // use i as the index 0 to 9 to get exactly 9 iterations
    if(int i = 0; i < 9; i++){

        if(i % 2 == 1) //if the number is odd, then play X
        {
            X = GetPlayerChoice(); //gets mapped to player choice function
            PlaceMarker(X, 'x'); //actual mapping
        }
        else{ //when function is even or when x%2 == 0
            O = GetPlayerChoice(); //just repeating previous functions
            PlaceMarker(O, 'o'); //mapping
        }
        //calling board array function to display
        DisplayBoard(A);
    }




    if ((arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]) ||
        (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0]) ||
        (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])) {
            cout << "The winner is " << arr[0][0] << "!" << endl;
    }
    else if ((arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2]) ||
        (arr[0][1] == arr[1][1] && arr[1][1] == arr[1][2]) ||
        (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])) {
            cout << "The winner is " << arr[1][1] << "!" << endl;
    }
    else if ((arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]) ||
        (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])) {
            cout << "The winner is " << arr[2][2] << "!" << endl;
    }
    else{
        cout << "Cat's Game!";
    }

}