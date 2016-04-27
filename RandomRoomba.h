/*
Program: RandomRoomba.h
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains prototypes for RandomRoomba class
Input:None
Output:None


*/
#ifndef RANDOMROOMBA_H
#define RANDOMROOMBA_H
#include "Roomba.h"
#include "floor.h"
class RandomRoomba : public Roomba {
 private:
	int battery;

 public:
	RandomRoomba();
	RandomRoomba(int x);
	void move_roomba(const int&,const int&, floor&);
	
};
#endif