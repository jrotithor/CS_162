/*
Program: smartest_roomba.h
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains prototypes for smartest_roomba class
Input:None
Output:None


*/
#ifndef SMARTEST_ROOMBA_H
#define SMARTEST_ROOMBA_H
#include "Roomba.h"
#include "floor.h"
class smartest_roomba : public Roomba{
	private:
		int battery;
	public:
		smartest_roomba();
		smartest_roomba(int x);
	
	void move_roomba(const int&, const int&, floor&);

};
#endif