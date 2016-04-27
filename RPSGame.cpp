/*
Program: RPSGame.cpp
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: contains all of the necessary functions to play the game of rock, paper, scissors.
Input: none
output: none

*/
#include "RPSGame.h"
#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
/*
Program: RPSGame
Description: default constructor for RPSGame class
Parameters: none
Pre-conditions: none
Post-conditions: an RPSGame object is created.

*/
RPSGame::RPSGame(){
human_tool = NULL;
computer_tool = NULL;
human_wins = 0;
computer_wins = 0;
ties = 0;
}
/*
Function: RPSGame
Description: copy constructor for RPSGame class
Parameters: an RPSGame object
Pre-conditions: none
Post-conditions: a new RPSGame object will be created

*/
RPSGame::RPSGame(const RPSGame &r){
	
	
}
/*
Function: operator=
Description: assignment operator overload for RPSGame class
Parameters: an RPSGame object
Pre-conditions: an RPSGame object exists
Post-conditions: a new RPSGame object will be created

*/
void RPSGame::operator=(const RPSGame &r){
	
	
}
/*
Function: set_tool
Description: sets the tool for the human player
Parameters: a character
Pre-conditions: a character is supplied
Post-conditions: the tool will be set

*/
char RPSGame::set_tool(const char &x){
	if(x == 'r'){
		human_tool = new rock;
	return 'r';
	}
	else if(x == 'p'){
		human_tool = new paper;
		return 'p';
	}
	else if(x == 's'){
		human_tool = new scissors;
		return 's';
	}
}
/*
Function: set_computer_tool
Description: sets the tool for the computer player
Parameters: a character
Pre-conditions: a character is supplied
Post-conditions: the computer's tool will be set

*/
char RPSGame::set_computer_tool(){
	int a = rand()%3 + 1;
	if(a == 1){
		computer_tool = new rock;
	return 'r';
	}
	else if(a == 2){
		computer_tool = new paper;
	return 'p';
	}
	else if(a == 3){
		computer_tool = new scissors;
	return 's';
	}
	
	
}
/*
Function: set_wins
Description: adds to human wins
Parameters: none
Pre-conditions: the human has won the round
Post-conditions: the human will have one more win

*/
void RPSGame::set_wins(){

		human_wins++;
	
}
/*
Function: get_wins
Description: gets human wins
Parameters: none
Pre-conditions: none
Post-conditions: the number of human wins will be returned

*/
int RPSGame::get_wins(){
	return human_wins;
	
}
/*
Function: set_wins
Description: adds to computer wins
Parameters: none
Pre-conditions: the human has lost the round
Post-conditions: the computer will have one more win

*/
void RPSGame::set_losses(){

		computer_wins++;
	
}
/*
Function: get_losses
Description: gets computer wins
Parameters: none
Pre-conditions: none
Post-conditions: the number of computer wins will be returned

*/
int RPSGame::get_losses(){
	return computer_wins;
	
}
/*
Function: set_ties
Description: adds to ties
Parameters: none
Pre-conditions: the human tied with the computer
Post-conditions: the human will have one more tie

*/
void RPSGame::set_ties(){

		ties++;
	
}
/*
Function: get_ties
Description: gets ties
Parameters: none
Pre-conditions: none
Post-conditions: the number of ties will be returned

*/
int RPSGame::get_ties(){
	return ties;
	
}
/*
Function: ~RPSGame
Description: destructor for RPSGame class
Parameters: none
Pre-conditions: a RPSGame object exists
Post-conditions: the RPSGame object will be destroyed.
*/
RPSGame::~RPSGame(){
	
	delete human_tool;
	human_tool = NULL;
	delete computer_tool;
	computer_tool = NULL;
}
	
	
