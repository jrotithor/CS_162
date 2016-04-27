/*
Program: scissors.cpp
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: operates on the scissors class
Input: none
output: none

*/
#include "scissors.h"
#include <iostream>

/*
Program: scissors
Description: default constructor for scissors class
Parameters: none
Pre-conditions: none
Post-conditions: a scissors object is created.

*/
//scissors::scissors():tool(){}
scissors::scissors(){
	strength = 1;
	
}
/*
Function: scissors
Description: nondefault constructor for scissors class
Parameters: an integer
Pre-conditions: none
Post-conditions: sets the strength for scissors

*/
scissors::scissors(const int &a){
	strength = a;
	
}
/*
Function: set_strength
Description: sets the strength for the scissors class
Parameters: an integer
Pre-conditions: a strength is supplied
Post-conditions: the scissors object's strength is put in
*/
void scissors::set_strength(const int &a){
	strength = a;
}
/*
Function: get_strength
Description: gets the strength for the scissors clas
Parameters: none
Pre-conditions: none
Post-conditions: the strength of scissors is returned

*/
int scissors::get_strength(){
	return strength;
	
}
/*
Function: Scissors
Description: copy constructor for Scissors class
Parameters: a Scissors object
Pre-conditions: none
Post-conditions: a new Scissors object will be created

*/
scissors::scissors(const scissors &s){
	
	
}
/*
Function: operator=
Description: assignment operator overload for scissors class
Parameters: a Scissors object
Pre-conditions: a Scissors object exists
Post-conditions: a new Scissors object will be created

*/
void scissors::operator=(const scissors &s){
	
}
/*
Function: fight
Description: compares the strength of the human object to the computer object if the human chose scissors
Parameters: the computer's choice, the human's choice, and an integer
Pre-conditions: the 3 inputs are supplied
Post-conditions: a winner will be declared based on the values(-1 for computer, 0 for tie, 1 for human)

*/
int scissors::fight(const char &x, const char &y, const int &z){
	if(x == 's'){
	int temp = strength;
	if(y == 'p')
		strength *= 2;
	else if(y == 'r')
		strength /= 2;
	if(strength < z)
		return -1;
	else if(strength > z)
		return 1;
	else
		return 0;
}
}
/*
Function: ~Scissors
Description: destructor for Scissors class
Parameters: none
Pre-conditions: a Scissors object exists
Post-conditions: the Scissors object will be destroyed.
*/
scissors::~scissors(){
	
	
	
}
