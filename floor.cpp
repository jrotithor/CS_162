/*
Program: floor.cpp
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains implementations for floor class
Input:None
Output:None


*/
#include "floor.h"
#include <string>
#include <iostream>
#include <vector>
using std::vector;
using std::string;
/*
 Function:floor
 Description:default constructor for floor
 Parameters:none
 Pre-conditions:none
 Post-conditions: a floor object exists
 
 
 
 */
floor::floor(){
	
	obj_row = 0;
	obj_col = 0;
}
/*
 Function:floor
 Description:nondefault constructor for floor
 Parameters:the row and column of the object
 Pre-conditions:none
 Post-conditions: a floor object exists
 
 
 
 */
floor::floor(const int &x, const int &y){
	obj_row = x;
	obj_col = y;
	
}
/*
 Function:increase_row
 Description:moves the roomba down
 Parameters:none
 Pre-conditions:none
 Post-conditions:the roomba moves down one spot
 
 
 
 */
void floor::increase_row(){
	obj_row++;
	
}
/*
 Function:increase_col
 Description:moves the roomba down
 Parameters:none
 Pre-conditions:none
 Post-conditions:the roomba moves down one spot
 
 
 
 */
void floor::increase_col(){
	
	obj_col++;
}
/*
 Function:decrease_row
 Description:moves the roomba down
 Parameters:none
 Pre-conditions:none
 Post-conditions:the roomba moves down one spot
 
 
 
 */
void floor::decrease_row(){
	obj_row--;
	
}
/*
 Function:decrease_col
 Description:moves the roomba down
 Parameters:none
 Pre-conditions:none
 Post-conditions:the roomba moves down one spot
 
 
 
 */
void floor::decrease_col(){
	
	obj_col--;
}


/*
 Function:get_row
 Description:returns the row of the roomba
 Parameters:none
 Pre-conditions:none
 Post-conditions: the row is returned
 
 
 
 */
int floor::get_row(){
	return obj_row;
}
/*
 Function:get_col
 Description:returns the column of the roomba
 Parameters:none
 Pre-conditions:none
 Post-conditions: the column is returned
 
 
 
 */
int floor::get_col(){
	return obj_col;
}
/*
 Function:get_v_size
 Description:returns the number of rows on the floor
 Parameters:none
 Pre-conditions:none
 Post-conditions:number of rows is returned
 
 
 
 */
int floor::get_v_size(){
	return v.size();
	
	
}
/*
 Function:get_v_cols
 Description:returns the number of columns on the floor
 Parameters:none
 Pre-conditions:none
 Post-conditions:number of columns is returned
 
 
 
 */
int floor::get_v_cols(){
	
	return v[0].size();
}
/*
 Function:place_roomba
 Description:puts the roomba in the specified location
 Parameters:none
 Pre-conditions:none
 Post-conditions:the roomba is properly placed
 
 
 const int &row, const int &col
 */
void floor::place_roomba(){

	v[obj_row][obj_col] = 'r';
}
/*
 Function:clean_last
 Description:shows the floor as clean where the roomba went
 Parameters:none
 Pre-conditions:none
 Post-conditions:the floor the roomba went on is clean
 
 
 const int &row, const int &col
 */
void floor::clean_last(){
	
	v[obj_row][obj_col] = 'c';
}
/*
 Function:set_v
 Description:initializes the room plan
 Parameters: a 2d vector
 Pre-conditions:a 2d vector exists
 Post-conditions:the vector is in the floor object
 
 
 
 */
void floor::set_v(vector <vector<char> >a){
	
	v = a;
	
	
}

/*
 Function:get_v
 Description:returns the room plan
 Parameters: none
 Pre-conditions:the room plan exists
 Post-conditions:the room plan is returned 
 
 
 */
vector <vector<char> > floor::get_v(){
	
	return v;
}
/*
 Function:is_at_left_edge
 Description:sees if the object is on the left wall
 Parameters:none
 Pre-conditions:a room exists
 Post-conditions: a boolean will be returned indicating if the object is on the left wall
 
 
 
 */
bool floor::is_at_left_edge(){
	  if(obj_col == 0){
		  return 1;
	  }
	  return 0;
	  
  }
/*
 Function:is_at_right_edge
 Description:sees if the object is on the right wall
 Parameters:none
 Pre-conditions:a room exists
 Post-conditions: a boolean will be returned indicating if the object is on the right wall
 
 
 
 */
 bool floor::is_at_right_edge(){
	  if(obj_col == (v[0].size() - 1)){
		  return 1;
	  }
	  return 0;
	  
  }
/*
 Function:is_at_top_edge
 Description:sees if the object is on the top wall
 Parameters:none
 Pre-conditions:a room exists
 Post-conditions: a boolean will be returned indicating if the object is on the top wall
 
 
 
 */
 bool floor::is_at_top_edge(){
	  if(obj_row == 0){
		  return 1;
	  }
	  return 0;
	  
  }
/*
 Function:is_at_bottom_edge
 Description:sees if the object is on the bottom wall
 Parameters:none
 Pre-conditions:a room exists
 Post-conditions: a boolean will be returned indicating if the object is on the bottom wall
 
 
 
 */
bool floor::is_at_bottom_edge(){
	  if(obj_row == (v.size() - 1)){
		  return 1;
	  }
	  return 0;
	  
  }
 
