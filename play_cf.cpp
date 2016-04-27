/*
 *Program:play_cf.cpp
 *Author:Jaydeep Rotithor
 *Date:4/12/2015
 *Description: contains the main function for connect four.
 *Inputs: command line arguments
 *Outputs: the game of connect four and a winner
 */

#include <iostream>
#include <cstdlib>
#include "./connect_four.h"
using namespace std;
/*
 *Function: main.cpp
 *Description: executes the game of connect four
 *Parameters: number of words in command line and the array of characters in the command line
 *Pre-conditions: command line arguments are supplied
 *Post-conditions: the connect four game will be played and a winner will be declared.
 */
int main(int argc, char* argv[]){
   int rows, cols;
   bool y, y2,y3,y4,ytwo1,ytwo2, ytwo3,ytwo4;
   struct game g;
   if(argc != 7){
      cout << "you need 7 arguments in total" << endl;   //makes sure that there is enough information to fill the struct
      exit(0);
   }
   bool x = is_valid_arguments(argv);    //makes sure that all of the input is valid
   while(x == true){
      if(argv[1][1] == 'r')       //tests every possible place where there can be a letter for the row declaration -r
	 rows = atoi(argv[2]);
      else if(argv[3][1] == 'r')
	 rows = atoi(argv[4]);
      else if(argv[5][1] == 'r')
	 rows = atoi(argv[6]);
      if(argv[1][1] == 'c')       //tests every possible place where there can be a letter for the column declaration -c  
	 cols = atoi(argv[2]);
      else if(argv[3][1] == 'c')
	 cols = atoi(argv[4]);
      else if(argv[5][1] == 'c')
	 cols = atoi(argv[6]);
      int turn = 1;                  //makes a counter so each player goes once at a time
      set_game_info(&g, argv);       //sets up the game struct
      g.board = create_table(rows, cols);   //creates the game board
      bool z = false;
      while(z == false){           //z indicates that the game is over. if it is false, the game will be played.
	 if(turn%2 == 1){
	    play_gamep1(&g);     //plays game for player 1
	    y = check_winner(g);    //these 4 functions check all posible directions to see if player 1 has won.
	    y2 = check_winner2(g);
	    y3 = check_winner3(g);
	    y4 = check_winner4(g);
	    if(y == true || y2 == true || y3 == true || y4 == true)   //if player 1 has won, the game must stop
	       break;
	    z = is_board_full(g);        //the game must also stop if the board is full
	    if(z == true){
	       cout << "tie game." << endl;
	       break;
	    }
	    turn++;    //makes it player 2's turn
	 }
	 else{
	    play_gamep2(&g);  //plays game for player 2
	    ytwo1 = check_winner_two1(g);   //just as above for player 1, checks if player 2 has won.
	    ytwo2 = check_winner_two2(g);
	    ytwo3 = check_winner_two3(g);
	    ytwo4 = check_winner_two4(g);
	    if(ytwo1 == true || ytwo2 == true || ytwo3 == true || ytwo4 == true) //stops play if player 2 has won
	       break;
	    z = is_board_full(g);  //if board is full, play is stopped
	    if(z == true){
	       cout << "tie game." << endl;
	       break;
	    }
	    turn++; //it is now player 1's turn
	 }
      }
      delete_table(&g); //clears the table and any memory allocated for it
      cout << "do you want to play again(enter 1 for yes, anything else for no)" << endl; //reprompts user
      int p;
      cin >> p;
      if(p != 1 || cin.fail())
	 x = 0;
      else x = 1;
   }

   return 0;
}
