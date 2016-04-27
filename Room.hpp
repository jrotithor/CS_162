/*
Program: room.hpp
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains prototypes and implementations for Room class
Input:None
Output:None


*/
#include "floor.h"
#include <iostream>
using namespace std;
template <typename T>
class Room {
 private:
 floor f;
T *obj; //obj could be a Roomba, Person, etc.
 public:
 void set_floor(floor f1){
	 f = f1;
 }
 /*
 Function:view_room
 Description: prints out the room's floor
 Parameters:none
 Pre-conditions:a room exists
 Post-conditions:the rooms floorplan will be displayed
 
 
 
 */
 void view_room(){
	 for(int i = 0; i < f.get_v_size(); i++){
		 for( int j = 0; j < f.get_v_cols(); j++){
			 cout << f.get_v()[i][j];
		 }
	cout << '\n';
	 }
 }
 floor get_f(){
	 return f;
 }
 /*
void clean_room() {
 if(obj!=NULL)
 obj->clean_floor(f);
}
*/
 };
 