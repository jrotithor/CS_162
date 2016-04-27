/*
 *Program: connect_four.cpp
 *Author: Jaydeep Rotithor
 *Date: 4/12/2015
 *Description: contains all of the functions necessary to play a game of connect four.
 *Input: number of rows, columns, and pieces to connect
Output: a real time game along with the eventual result.
 *
 */
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "./connect_four.h"
using namespace std;
/*
 *Function:Is_valid_arguments
 *Description: checks to see if the arguments supplied by the user are valid
 *Parameters:a 2d array of characters from the command line.
 *Pre-conditions: the user supplied command line arguments
 *Post-conditions: true is output if everything passes
 */
bool is_valid_arguments(char *info[]){
   if((info[1][0] != '-' || info[1][1] != 'r' || info[1][2] != '\0')&&          //makes sure that -r is written for rows
	 (info[3][0] != '-' || info[3][1] != 'r' || info[3][2] != '\0')&&
	 (info[5][0] != '-' || info[5][1] != 'r' || info[5][2] != '\0')){
      cout << "the input is invalid" << endl;
      exit(0);
   }
   if((info[1][0] != '-' || info[1][1] != 'c' || info[1][2] != '\0')&&         //makes sure that -c is written for columns
	 (info[3][0] != '-' || info[3][1] != 'c' || info[3][2] != '\0')&&
	 (info[5][0] != '-' || info[5][1] != 'c' || info[5][2] != '\0')){
      cout << "the input is invalid" << endl;
      exit(0);
   }
   if((info[1][0] != '-' || info[1][1] != 'p' || info[1][2] != '\0')&&        //makes sure that -p is written for pieces to connect
	 (info[3][0] != '-' || info[3][1] != 'p' || info[3][2] != '\0')&&
	 (info[5][0] != '-' || info[5][1] != 'p' || info[5][2] != '\0')){
      cout << "the input is invalid" << endl;
      exit(0);
   }
   while(atoi(info[2]) <= 0){
      cout << "you cannot have 0 rows/columns/pieces, try again: " << endl;   //makes sure that the input is nonzero and valid
      cin >> info[2];
   }
   while(atoi(info[4]) <= 0){
      cout << "you cannot have 0 rows/columns/pieces, try again: " << endl; //makes sure that the input is nonzero and valid
      cin >> info[4];
   }
   while(atoi(info[6]) <= 0){
      cout << "you cannot connect 0 rows/columns/pieces, try again: " << endl; //makes sure that the input is nonzero and valid
      cin >> info[6];
   }
 return true;
}
/*
 *Function: set_game_info
 *Description: places all of the information provided in the command line into the sgame struct
 *Parameters: a pointer to a game and the 2d array argv
 *Pre-conditions: all inputs are valid.
 *Posr-conditions: the game struct will contain all of the user-supplied information.
 * 
 */
void set_game_info(game *g, char *info[]){
   if(info[1][1] == 'r')     //sets the number of rows in the struct
      g->r = atoi(info[2]);
   else if(info[3][1] == 'r')
      g->r = atoi(info[4]);
   else if(info[5][1] == 'r')
      g->r = atoi(info[6]);
   if(info[1][1] == 'c')     //sets the number of columns in the struct
      g->c = atoi(info[2]);
   else if(info[3][1] == 'c')
      g->c = atoi(info[4]);
   else if(info[5][1] == 'c')
      g->c = atoi(info[6]);
   if(info[1][1] == 'p')    //sets the number of pieces in the struct
      g->p = atoi(info[2]);
   else if(info[3][1] == 'p')
      g->p = atoi(info[4]);
   else if(info[5][1] == 'p')
      g->p = atoi(info[6]);
   cout << "player 1, do you want yellow(y) or red(r)?" << endl;
   cin >> g->p1;    //sets p1's color
   if(g->p1 == 'r')
      g->p2 = 'y';  //gives p2 the other color
   else g->p2 = 'r';
   /*
    *Function: create_table
Description: creates a table of the dimensions supplied in the command line.
    *Parameters: 2 integers, which are the array dimensions
    *Pre-conditions: the parameters are valid integers
    *Post-conditions: an array of the proper size is created.
    */
}
char ** create_table(int a,int b){
   char ** table = new char*[a];//creates teh table rows
   for(int i = 0; i < a; i++)  //creates the table columns
      table[i] = new char[b];
   for(int i = 0; i < a; i++)
      for(int j = 0; j < b; j++)
	 table[i][j] = '-';  //fills up whitespace in the table
   return table;
}
/*
 *Function: play_gamep1
 *Description: consists of the entirety of player 1's turn
 *Paramters: the filled up game struct
 *pre-conditions: the game struct has all of the necessary information.
 *Post-conditions: player 1 will get to place his marker in a spot on the board.
 */
void play_gamep1(game *g){
   int col;
   int h = g->r-1; //h accounts for already filled elements in the table
   cout << "Player 1, which column do you want to put your piece in? " << endl;
   cin >> col;
   while((g->board[h][col] == 'r' || g->board[h][col] == 'y')){ 
      while(h == 0){
	 cout << "you have selected an invalid column. Please try again: " << endl;
	 cin.clear();
	 cin.ignore();
	 h = g->r-1;
	 cin >> col;
      } 
      h--;
   }
   while(h <= -1 || col >= g->c || col < 0){ //makes sure the column is valid
      cout << "you have selected an invalid column. Please try again: " << endl;
      cin.clear();
      cin.ignore();
      cin >> col;
   }
   g->board[h][col] = g->p1;  //places the piece in the proper spot
   for(int i = 0; i < g->r; i++){
      for(int j = 0; j < g->c; j++)
	 cout << g->board[i][j];  //prints out the board;
      cout << endl;
   }
}

/*
 *Function: play_gamep2
 *Description: consists of the entirety of player 2's turn
 *Paramters: the filled up game struct
 *pre-conditions: the game struct has all of the necessary information.
 *Post-conditions: player 2 will get to place his marker in a spot on the board.
 */
void play_gamep2(game*g){
   int col;
   int h = g->r-1;  //once again, h accounts for already filled spaces in the table
   cout << "Player 2, which column do you want to put your piece in? " << endl;
   cin >> col;
   while((g->board[h][col] == 'r' || g->board[h][col] == 'y')){
      while(h == 0){
	 cout << "you have selected an invalid column. Please try again: " << endl;
	 cin.clear();
	 cin.ignore();
	 h = g->r-1;
	 cin >> col;
      } 
      h--;
   }
   while(h < 0 || col >= g->c || col < 0){ //makes sure teh input is valid
      cout << "you have selected an invalid column. Please try again: " << endl;
      cin.clear();
      cin.ignore();
      cin >> col;
   }
   g->board[h][col] = g->p2;   //places the marker in the proper spot
   for(int i = 0; i < g->r; i++){
      for(int j = 0; j < g->c; j++)
	 cout << g->board[i][j];
      cout << endl;
   }
}

/*
 *Function: is_board_full
 *Description: checks to see if the board is full
 *Parameters: the game struct
 *pre-conditions: the game has already been played
 *post-conditions: the program will output true if the board is full and false otherwise.
 */
bool is_board_full(game g){  
   int boardcount;
   for(int i = 0; i < g.r; i++)
      for(int j = 0; j < g.c; j++)
	 if(g.board[i][j] == '-')  //checks to se if there are any open slots in the board.
	    return false;
   return true;

}
/*
 *Function: check_winner
 *Description: scans all of the rows to see if player 1 has met the victory conditions.
 *Parameters: the game struct
 *pre-conditions: the game has already been played
 *post-conditions: the program will output true if player 1 wins and false otherwise.
 */
bool check_winner(game g){
   int piececounter = 0;
   int i = 0;
   int j = 0;
   for(i = 0;i < g.r; i++){
      for(j = 0;j < g.c; j++){    //if player 1 has enough pieces in the right spots, he wins.
	 if(g.board[i][j] == g.p1)
	    piececounter++;
	 else if(g.board[i][j] == g.p2 || g.board[i][j] == '-')
	    piececounter = 0;
	 if(piececounter >= g.p){
	    cout << "Player 1 wins!" << endl;
	    return true;
	 }
      }
      piececounter = 0;
   }
   return false;
}
/*
 *Function: check_winner2
 *Description: scans all of the columns to see if player 1 has met the victory conditions.
 *Parameters: the game struct
 *pre-conditions: the game has already been played
 *post-conditions: the program will output true if player 1 wins and false otherwise.
 */
bool check_winner2(game g){
   int piececounter = 0;
   int i = 0;
   int j = 0;
   for(i = 0;i < g.c; i++){ //if player 1 has enough pieces in the right spots, he wins.
      for(j = 0; j < g.r; j++){
	 if(g.board[j][i] == g.p1)
	    piececounter++;
	 else if(g.board[j][i] == g.p2 || g.board[j][i] == '-')
	    piececounter = 0;
	 if(piececounter >= g.p){
	    cout << "Player 1 wins!" << endl;
	    return true;
	 }
      }
      piececounter = 0;
   }
   return false;
}
/*
 *Function: check_winner3
 *Description: scans all of the top left to bottom right diagonals to see if player 1 has met the victory conditions.
 *Parameters: the game struct
 *pre-conditions: the game has already been played
 *post-conditions: the program will output true if player 1 wins and false otherwise.
 */
bool check_winner3(game g){
   int piececounter = 0;
   int i = 0;
   int j = 0;
   int k = 0;
   int l = 0;
   for(i = 0; i < g.r; i++){
      for(j = 0; j < g.c; j++){ //if player 1 has enough pieces in the right spots, he wins.
	    k = i;
	    l = j;
	 while(k < g.r && l < g.c){
	    if(g.board[k][l] == g.p1)
	       piececounter++;
	    else if(g.board[k][l] == g.p2 || g.board[k][l] == '-')
	       piececounter = 0;
	    if(piececounter >= g.p){
	       cout << "Player 1 wins!" << endl;
	       return true;
	    }
	    l++;
	    k++;
	 }
      piececounter = 0;
      }
   }
   return false;
}
/*
 *Function: check_winner4
 *Description: scans all of the bottom left to top right to see if player 1 has met the victory conditions.
 *Parameters: the game struct
 *pre-conditions: the game has already been played
 *post-conditions: the program will output true if player 1 wins and false otherwise.
 */
bool check_winner4(game g){
   int piececounter = 0;
   int i = 0;
   int j = 0;
   int k = 0;
   int l = 0;
   for(i = g.r - 1; i >= 0; i--){
      for(j = 0; j< g.c; j++){ //if player 1 has enough pieces in the right spots, he wins.
	k = i;
	l = j;
	 while(k >= 0 && l < g.c){
	    if(g.board[k][l] == g.p1)
	       piececounter++;
	    else if(g.board[k][l] == g.p2 || g.board[k][l] == '-')
	       piececounter = 0;
	    if(piececounter >= g.p){
	       cout << "Player 1 wins!" << endl;
	       return true;

	    }
	    l++;
	    k--;
	 }
      piececounter = 0;
      }
   }
   return false;
}
/*
 *Function: check_winner_two1
 *Description: scans all of the rows to see if player 2 has met the victory conditions.
 *Parameters: the game struct
 *pre-conditions: the game has already been played
 *post-conditions: the program will output true if player 2 wins and false otherwise.
 */
bool check_winner_two1(game g){
   int piececounter = 0;
   int i = 0;
   int j = 0;
   for(i = 0;i < g.r; i++){
      for(j = 0;j < g.c; j++){ //if player 2 has enough pieces in the right spots, he wins.
	 if(g.board[i][j] == g.p2)
	    piececounter++;
	 else if(g.board[i][j] == g.p1 || g.board[i][j] == '-')
	    piececounter = 0;
	 if(piececounter >= g.p){
	    cout << "Player 2 wins!" << endl;
	    return true;
	 }
      }
      piececounter = 0;
   }
   return false;
}
/*
 *Function: check_winner_two2
 *Description: scans all of the columns to see if player 2 has met the victory conditions.
 *Parameters: the game struct
 *pre-conditions: the game has already been played
 *post-conditions: the program will output true if player 2 wins and false otherwise.
 */
bool check_winner_two2(game g){
   int piececounter = 0;
   int i = 0;
   int j = 0;
   for(i = 0;i < g.c; i++){
      for(j = 0;j < g.r; j++){ //if player 2 has enough pieces in the right spots, he wins.
	 if(g.board[j][i] == g.p2)
	    piececounter++;
	 else if(g.board[j][i] == g.p1 || g.board[j][i] == '-')
	    piececounter = 0;
	 if(piececounter >= g.p){
	    cout << "Player 2 wins!" << endl;
	    return true;
	 }
      }
      piececounter = 0;
   }
   return false;
}
/*
 *Function: check_winner_two3
 *Description: scans all of the top left to bottom right diagonals to see if player 2 has met the victory conditions.
 *Parameters: the game struct
 *pre-conditions: the game has already been played
 *post-conditions: the program will output true if player 2 wins and false otherwise.
 */
bool check_winner_two3(game g){
   int piececounter = 0;
   int i = 0;
   int j = 0;
   int k = 0;
   int l = 0;
   for(i = 0; i < g.r; i++){
      for(j = 0; j < g.c; j++){ //if player 2 has enough pieces in the right spots, he wins.
	    k = i;
	    l = j;
	 while(k < g.r && l < g.c){
	    if(g.board[k][l] == g.p2)
	       piececounter++;
	    else if(g.board[k][l] == g.p1 || g.board[k][l] == '-')
	       piececounter = 0;
	    if(piececounter >= g.p){
	       cout << "Player 2 wins!" << endl;
	       return true;
	    }
	    l++;
	    k++;
	 }
      piececounter = 0;
      }
   }
   return false;
}
/*
 *Function: check_winner_two4
 *Description: scans all of the bottom left to top right diagonals to see if player 2 has met the victory conditions.
 *Parameters: the game struct
 *pre-conditions: the game has already been played
 *post-conditions: the program will output true if player 2 wins and false otherwise.
 */
bool check_winner_two4(game g){
   int piececounter = 0;
   int i = 0;
   int j = 0;
   int k = 0;
   int l = 0;
   for(i = g.r - 1; i >= 0; i--){
      for(j = 0; j < g.c; j++){ //if player 2 has enough pieces in the right spots, he wins.
      k = i;
      l = j;
	 while(k >=0 && l < g.c){
	    if(g.board[k][l] == g.p2)
	       piececounter++;
	    else if(g.board[k][l] == g.p1 || g.board[k][l] == '-')
	       piececounter = 0;
	    if(piececounter >= g.p){
	       cout << "Player 2 wins!" << endl;
	       return true;

	    }
	    l++;
	    k--;
	 } 
	 piececounter = 0;
      }
   }
   return false;
}
/*
 *Function: delete_table
 *Description: frees the memory dynamically allocated for the table
 *Parameters: a pointer to the game struct
 *pre-conditions: a game winner has been declared
 *post-conditions: the table will be cleared and the allocated memory will be freed.
 */
void delete_table(game *g){
   for(int i = 0; i < g->r; i++)
      delete [] g->board[i]; // deletes dynamically allocated memory
   delete [] g->board;   //deletes the game board

}
