/*
Program: RandomRoomba.cpp
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains implementations for RandomRoomba class
Input:None
Output:None


*/
#include "RandomRoomba.h"
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>

#include "floor.h"
using namespace std;
/*
 Function:RandomRoomba
 Description:default onstructor for RandomRoomba
 Parameters:none
 Pre-conditions:none
 Post-conditions: a RandomRoomba object is created
 
 
 
 */
RandomRoomba::RandomRoomba(){
	
	

}
/*
 Function:RandomRoomba
 Description:nondefault onstructor for RandomRoomba
 Parameters:battery
 Pre-conditions:none
 Post-conditions: a RandomRoomba object is created
 
 
 
 */
RandomRoomba::RandomRoomba(int x):Roomba(x){} 
/*
 Function:move_roomba
 Description:randomly moves around the roomba
 Parameters:an integer and a floor object
 Pre-conditions:a floorplan exists
 Post-conditions: the roomba moves and cleans the floor
 
 
 
 */
void RandomRoomba::move_roomba(const int &a, const int &b, floor &f){
	
	int heading = 0;
	f.clean_last();
	if(f.is_at_left_edge() && f.is_at_top_edge()){
		heading = rand()%2 + 1;
		if(heading == 1)
			f.increase_row();
		else if(heading == 2)
			f.increase_col();

		
	}
	else if(f.is_at_right_edge() && f.is_at_top_edge()){
		heading = rand()%2 + 1;
		if(heading == 1)
			f.decrease_col();
		else if(heading == 2) 
			f.increase_row();

	}
	else if(f.is_at_left_edge() && f.is_at_bottom_edge()){
		heading = rand()%2 + 1;
		if(heading == 1)
			f.decrease_row();
		else if(heading == 2)
		f.increase_col();
	
	}
	else if(f.is_at_right_edge() && f.is_at_bottom_edge()){
		heading = rand()%2 + 1;
		if(heading == 1)
			f.decrease_col();
		else if(heading == 2)
			f.decrease_row();
	
		
	}
	else if(f.is_at_left_edge()){
		heading = rand()%3 + 1;
		if(heading == 1)
			f.decrease_row();
		else if(heading == 2)
			f.increase_col();
		else if(heading == 3)
			f.increase_row();
	
	}
	else if(f.is_at_right_edge()){
		heading = rand()%3 + 1;
		if(heading == 1)
		f.decrease_col();
		else if(heading == 2)
			f.decrease_row();
		else if(heading == 3)
			f.increase_row();

	}
	else if(f.is_at_top_edge()){
		heading = rand()%3 + 1;
		if(heading == 1)
			f.decrease_col();
		else if(heading == 2)
			f.increase_col();
		else if(heading == 3)
			f.increase_row();
		
	}
	else if(f.is_at_bottom_edge()){
		heading = rand()%3 + 1;
		if(heading == 1)
			f.decrease_col();
		else if(heading == 2)
			f.decrease_row();
		else if(heading == 3)
			f.increase_col();
		
	}
	else {
		heading = rand()%4 + 1;
		
		if(heading == 1)
			f.decrease_col();
		else if(heading == 2)
			f.decrease_row();
		else if(heading == 3)
			f.increase_col();
		else if(heading == 4)
			f.increase_row();
			f.place_roomba();
		//	 for(int i = 0; i < f.get_v_size(); i++){
		// for( int j = 0; j < f.get_v_cols(); j++){
		//	 cout << f.get_v()[i][j];
		// }
	//cout << '\n';
	 //}
		
	}	
	cout << f.get_row() << f.get_col() << endl;
	f.place_roomba();
	//f.get_row(), f.get_col()
	
}

