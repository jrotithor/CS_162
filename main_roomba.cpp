/*
Program: main_roomba.cpp
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains the main roomba function.
Input:None
Output:None


*/
#include "Roomba.h"
#include "Room.hpp"
#include "RandomRoomba.h"
#include "smarter_roomba.h"
#include "smartest_roomba.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <stdexcept>
using namespace std;
/*
 Function:maim
 Description: executes the cleaning of the room by the roomba
 Parameters: the number of command line arguments and the actual arguments
 Pre-conditions:none
 Post-conditions: the roomba cleans the room with the specified floorplan
 
 
 
 */
int main(int argc, char*argv[]){
	bool x;
	
	if(argc != 11){
	
	cout << "Too few arguments. You need 11" << endl;
	exit(0);
}
	ifstream input;
	try{
		input.open(argv[2], ios::in);
		
	}
	catch(exception e){
		
		cout << "failed to open input" << endl;
	}
	
	int roomba_input;

if(argv[1][1] != 'f' || argv[3][1] != 'b' || argv[5][1] != 'r' || argv[7][1] != 'c' || argv[9][1] != 'v'){
	cout << "Please enter -f for the 2nd argument, -b for the 4th argument, -r for the 6th argument, -c for the 8th argument, and -v for the 10th argument." << endl;
	exit(0);
	
	
}
cout << "which roomba?(1- random, 2- more efficient, 3- most efficient)" << endl;
cin >> roomba_input;

while(roomba_input < 1 || roomba_input > 3){
	cout << "The input is invalid. Please try again: " << endl;
	cin.clear();
	cin.ignore();
	cin >> roomba_input;
	

}
Roomba *r;
Room <char>room1;
//RandomRoomba r1;
//smarter_roomba r2;
//smartest_roomba r3;
floor f(atoi(argv[6]), atoi(argv[8]));
vector <vector<char> >a;
vector <char>temp;
int i = 0;

for(int i = 0; i < 4; i++){
	//while(!input.eof()){
	//input.read(c,256);
	
	temp.clear();
	for(int j = 0; j < 4; j++){
		temp.push_back('f');
	
	}
	a.push_back(temp);
	
}

//a[atoi(argv[6])] [atoi(argv[8])] = 'r';
f.set_v(a);


//atoi(argv[6]), atoi(argv[8])
f.place_roomba();
//room1.set_floor(f);
//room1.view_room();
if(roomba_input == 1)
	r = new RandomRoomba;
else if(roomba_input == 2)
	r = new smarter_roomba;
else if(roomba_input == 3)
	r = new smartest_roomba;

r->set_battery(atoi(argv[4]));
int y = 0;
while((y < a.size()*a[0].size())|| r->get_battery() > 0){
	if(roomba_input == 2 || roomba_input == 3){
		if(room1.get_f().get_row() == a.size()-1 && (room1.get_f().get_col() == a[0].size() -1 || room1.get_f().get_col() == 0))
			exit(0);
	}
//room1.get_f().place_roomba();
	//room1.get_f().get_row(), room1.get_f().get_col()


 r->move_roomba(atoi(argv[6]), atoi(argv[8]), f);
 //f.place_roomba(room1.get_f().get_row(), room1.get_f().get_col());
 cout << "Move: " << r->get_total_moves() + 1 << endl;
r->change_battery(); 
r->change_total_moves();
cout << endl;
room1.set_floor(f);
room1.view_room();
cout << endl;
y++;
	
		
 }
	
		delete r;
	
	
	
	
	
	
	
	
	
	
return 0;
} 