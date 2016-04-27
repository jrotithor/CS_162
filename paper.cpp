/*
Program: paper.cpp
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: operates on the paper class
Input: none
output: none

*/
#include "paper.h"
#include <iostream>

/*
Function: paper
Description: default constructor for paper class
Parameters: none
Pre-conditions: none
Post-conditions: a paper object is created.

*/
//paper::paper():tool(){}
paper::paper(){
	strength = 1;
	
}
/*
Function: paper
Description: nondefault constructor for paper class
Parameters: an integer
Pre-conditions: none
Post-conditions: sets the strength for paper

*/
paper::paper(const int &a){
	strength = a;
	
}
/*
Function: set_strength
Description: sets the strength for the paper class
Parameters: an integer
Pre-conditions: a strength is supplied
Post-conditions: the paper object's strength is put in
*/
void paper::set_strength(const int &a){
	strength = a;
	
}
/*
Function: get_strength
Description: gets the strength for the paper clas
Parameters: none
Pre-conditions: none
Post-conditions: the strength of paper is returned

*/
int paper::get_strength(){
	return strength;
	
}
/*
Function: Paper
Description: copy constructor for Paper class
Parameters: a Paper object
Pre-conditions: none
Post-conditions: a new Paper object will be created

*/
paper::paper(const paper &p){
	
	
	
}
/*
Function: operator=
Description: assignment operator overload for paper class
Parameters: a paper object
Pre-conditions: a paper object exists
Post-conditions: a new paper object will be created

*/
void paper::operator=(const paper &p){
	
	
	
}
/*
Function: fight
Description: compares the strength of the human object to the computer object if the human chose paper
Parameters: the computer's choice, the human's choice, and an integer
Pre-conditions: the 3 inputs are supplied
Post-conditions: a winner will be declared based on the values(-1 for computer, 0 for tie, 1 for human)

*/
int paper::fight(const char &x, const char &y, const int &z){
	if(x == 'p'){
	int temp = strength;

	if(y == 'r')
		strength *= 2;
	else if(y == 's')
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
Function: ~paper
Description: destructor for paper class
Parameters: none
Pre-conditions: a paper object exists
Post-conditions: the paper object will be destroyed.
*/
paper::~paper(){
	
	
}
