/*
Program: rock.cpp
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: operates on the rock class
Input: none
output: none

*/
#include "rock.h"
#include <iostream>
/*
Program: rock
Description: default constructor for rock class
Parameters: none
Pre-conditions: none
Post-conditions: a rock object is created.

*/
//rock::rock():tool(){}
rock::rock(){
	strength = 1;
	
}
/*
Function: paper
Description: nondefault constructor for paper class
Parameters: an integer
Pre-conditions: none
Post-conditions: sets the strength for paper

*/
rock::rock(const int &a){
	strength = a;
	
}
/*
Function: set_strength
Description: sets the strength for the rock class
Parameters: an integer
Pre-conditions: a strength is supplied
Post-conditions: the rock object's strength is put in
*/
void rock::set_strength(const int &a){
	strength = a;
}
/*
Function: get_strength
Description: gets the strength for the rock clas
Parameters: none
Pre-conditions: none
Post-conditions: the strength of rock is returned

*/
int rock::get_strength(){
	return strength;
	
}
/*
Function: Rock
Description: copy constructor for Rock class
Parameters: a Rock object
Pre-conditions: none
Post-conditions: a new Rock object will be created

*/
rock::rock(const rock &r){
	
	
	
}
/*
Function: operator=
Description: assignment operator overload for Rock class
Parameters: a Rock object
Pre-conditions: a Rock object exists
Post-conditions: a new Rock object will be created

*/
void rock::operator=(const rock &r){
	
} 
/*
Function: fight
Description: compares the strength of the human object to the computer object if the human chose rock
Parameters: the computer's choice, the human's choice, and an integer
Pre-conditions: the 3 inputs are supplied
Post-conditions: a winner will be declared based on the values(-1 for computer, 0 for tie, 1 for human)

*/
int rock::fight(const char &x, const char &y, const int &z){
	if(x == 'r'){
	int temp = strength;
	if(y == 's')
		strength *= 2;
	else if(y == 'p')
		strength /= 2;
	if(strength < z)
		return -1;
	else if(strength > z)
		return 1;
	else return 0;
}
}
/*
Function: ~Rock
Description: destructor for Rock class
Parameters: none
Pre-conditions: a Rock object exists
Post-conditions: the Rock object will be destroyed.
*/
rock::~rock(){
	
	
	
}
