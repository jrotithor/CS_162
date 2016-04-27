/*
Program: tool.cpp
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: operates on the tool class
Input: none
output: none

*/
#include "tool.h"
#include <iostream>
/*
Program: tool
Description: default constructor for tool class
Parameters: none
Pre-conditions: none
Post-conditions: a tool object is created.

*/
tool::tool(){
	type = NULL;
	strength = 1;
	
	
	
	

}
/*
Function: Tool
Description: copy constructor for tool class
Parameters: a tool object
Pre-conditions: a tool object exists
Post-conditions: a new tool object will be created

*/
tool::tool(const tool &t){
	
}
/*
Function: operator=
Description: assignment operator overload for tool class
Parameters: a tool object
Pre-conditions: a tool object exists
Post-conditions: a new tool object will be created

*/
void tool::operator=(const tool &t){
	
	
}
/*
Function: set_strength
Description: sets the strength for the tool
Parameters: an integer
Pre-conditions: a strength is given to set
Post-conditions: the new strength will be set
*/
void tool::set_strength(const int &a){
	strength = a;
	
	
}
/*
Function: ~tool
Description: destructor for tool class
Parameters: none
Pre-conditions: a tool object exists
Post-conditions: the tool object will be destroyed.
*/
tool::~tool(){
	
	
}