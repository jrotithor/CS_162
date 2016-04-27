/*
Program: smartest_roomba.cpp
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains implementations for smartest_roomba class
Input:None
Output:None


*/
#include "smartest_roomba.h"
#include <iostream>
#include <string>
using namespace std;
/*
 Function:smartest_roomba
 Description:nondefault onstructor for smartest_roomba
 Parameters:battery
 Pre-conditions:none
 Post-conditions: a smartest_roomba object is created
 
 
 
 */
smartest_roomba::smartest_roomba(){
	
	
	
}
smartest_roomba::smartest_roomba(int x):Roomba(x){} 
/*
void smartest_roomba::set_up_roomba(floor f){
	
	int count;
	bool false_start = false;
	if(f.is_at_left_edge() == 0 || f.is_at_top_edge() == 0)
		false_start = true;
	else
		false_start = false;
	while(false_start){
	if(f.is_at_left_edge() == 0)
		f.decrease_col();
	if(f.is_at_top_edge() == 0)
		f.decrease_row();

	}
	
}*/
/*
 Function:move_roomba
 Description:moves around the roomba efficiently
 Parameters:an integer and a floor object
 Pre-conditions:a floorplan exists
 Post-conditions: the roomba moves and cleans the floor
 
 
 
 */
void smartest_roomba::move_roomba(const int &a, const int &b, floor &f){
	string direction;
	f.clean_last();
	if(f.get_row() != 4|| f.get_col() != 4){
		if(f.is_at_bottom_edge() == 0 || (f.is_at_right_edge() == 0 && f.is_at_left_edge() == 0)){
			if(f.is_at_right_edge() || f.is_at_left_edge()){
				f.increase_row();
				battery--;
				battery++;
			
		}

		
	if(f.get_row()%2 == 0){
		f.increase_col();
			}	
	else if(f.get_row()%2 == 1){
		f.decrease_col();
			}
		}
		/*
		else
			if(f.get_row() != 0)
			f.decrease_row();
		if(f.get_col() != 0)
			f.decrease_col();
		
	*/
	}
	
	else 
		return;
	
		f.place_roomba();
//	f.get_row(), f.get_col()
		cout << f.get_row() << f.get_col() << endl;

	
	
}













