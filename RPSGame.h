 /*
Program: RPSGame.h
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: creates the RPSGame class
Input: none
output: none

*/
 #ifndef RPSGAME_H
 #define RPSGAME_H
 #include "tool.h"
#include "paper.h"
#include "scissors.h"
#include "rock.h"
 class RPSGame{
	 private:
     tool* human_tool;
	 tool* computer_tool;
     int human_wins;
	 int computer_wins;
	 int ties;
	 public:
	 RPSGame();
	 RPSGame(const RPSGame &);
	 void set_wins();
	 int get_wins();
	 void set_losses();
	 int get_losses();
	 void set_ties();
	 int get_ties();
	 void operator=(const RPSGame &);
	  char set_tool(const char&);
	  char set_computer_tool();
	~RPSGame();
 
 };
 
 #endif
