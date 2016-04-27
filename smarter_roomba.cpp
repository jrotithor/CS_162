/*
Program: smarter_roomba.cpp
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains implementations for smarter_roomba class
Input:None
Output:None


*/
#include "smarter_roomba.h"
#include <iostream>
/*
 Function:smarter_roomba
 Description:default onstructor for smarter_roomba
 Parameters:none
 Pre-conditions:none
 Post-conditions: a smarter_roomba object is created
 
 
 
 */
smarter_roomba::smarter_roomba(){
	
	
	
}
/*
 Function:smarter_roomba
 Description:nondefault onstructor for smarter_roomba
 Parameters:battery
 Pre-conditions:none
 Post-conditions: a smarter_roomba object is created
 
 
 
 */
smarter_roomba::smarter_roomba(int x):Roomba(x){} 
/*
 Function:move_roomba
 Description:moves around the roomba efficiently but wastes battery on turns
 Parameters:an integer and a floor object
 Pre-conditions:a floorplan exists
 Post-conditions: the roomba moves and cleans the floor
 
 
 
 */
void smarter_roomba::move_roomba(const int &a, const int &b, floor &f){
	string direction;
	f.clean_last();
	if(f.get_row() != 4 || f.get_col() != 4){
		if(f.is_at_bottom_edge() == 0 || (f.is_at_right_edge() == 0 && f.is_at_left_edge() == 0)){
			if(f.is_at_right_edge() || f.is_at_left_edge()){
				f.increase_row();
				battery--;
			
			}
		
		   
			if(f.get_row()%2 == 0){
				f.increase_col();
		
		
				}	
			else if(f.get_row()%2 == 1){
				f.decrease_col();
		
		
				}
		}
		/*
		else{
			if(f.get_row() != 0)
			f.decrease_row();
		return;
		if(f.get_col() != 0)
			f.decrease_col();
		return;
		}
	*/
	}
	else 
		return;
		f.place_roomba();
//	f.get_row(), f.get_col()
	
	
	
}
