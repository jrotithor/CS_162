/*
Program: Roomba.cpp
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains implemetations for Roomba class
Input:None
Output:None


*/
#include "Roomba.h"
#include <iostream>
#include "floor.h"
/*
 Function:Roomba
 Description:default constructor for Roomba
 Parameters:none
 Pre-conditions:none
 Post-conditions: a Roomba object is created
 
 
 
 */
Roomba::Roomba(){
	
	battery = 0;
	total_moves = 0;
}
/*
 Function:Roomba
 Description:nondefault constructor for Roomba
 Parameters:the battery
 Pre-conditions:none
 Post-conditions: a Roomba object is created
 
 
 
 */
Roomba::Roomba(const int &x){
	
	battery = x;
}
/*
 Function:set_battery
 Description:sets the battery life
 Parameters:the battery
 Pre-conditions:battery life is supplied
 Post-conditions: battery life is entered into the Roomba object
 
 
 
 */
void Roomba::set_battery(const int &x){
	battery = x;
	
}
/*
 Function:change_battery
 Description:reduces the battery life by 1
 Parameters:none
 Pre-conditions:battery life is supplied
 Post-conditions: battery life is reduced by 1
 
 
 
 */
void Roomba::change_battery(){
	battery--;
	
}
/*
 Function:get_battery
 Description:gets the battery life
 Parameters:none
 Pre-conditions:battery life is entered
 Post-conditions: battery life is returned
 
 
 
 */
int Roomba::get_battery(){
	return battery;
	
	
}
/*
 Function:change_total_moves
 Description:adds 1 to total_moves
 Parameters:none
 Pre-conditions:none
 Post-conditions: total moves increases by 1
 
 
 
 */
void Roomba::change_total_moves(){
	total_moves++;
	
	
}
/*
 Function:get_total_moves
 Description:gets total_moves
 Parameters:none
 Pre-conditions:none
 Post-conditions:returns total moves
 
 
 
 */
int Roomba::get_total_moves(){
	return total_moves;
	
	
}
/*
 Function:move_roomba
 Description: moves around the roomba
 Parameters:an integer and a floor object
 Pre-conditions:a floorplan exists
 Post-conditions: the roomba moves and cleans the floor
 
 
 
 */
 
void Roomba::move_roomba(const int &a, const int &b, floor &f){
	
	
}
