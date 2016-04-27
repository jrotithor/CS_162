/*
Program: smarter_roomba.h
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains prototypes for smarter_roomba class
Input:None
Output:None


*/
#ifndef SMARTER_ROOMBA_H
#define SMARTER_ROOMBA_H
#include "Roomba.h"
#include "floor.h"
class smarter_roomba: public Roomba{
	private:
		int battery;
	public:
		smarter_roomba();
		smarter_roomba(int x);
		void move_roomba(const int&, const int&,floor&);

};
#endif