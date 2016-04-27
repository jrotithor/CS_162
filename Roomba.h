/*
Program: Roomba.h
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains prototypes for Roomba class
Input:None
Output:None


*/
#ifndef ROOMBA_H
#define ROOMBA_H
#include "floor.h"
class Roomba {
 private:
 int battery; 
int total_moves; 
 public:
	Roomba();
	Roomba(const int&);
   virtual void move_roomba(const int&, const int&,floor&) = 0;
   void set_battery(const int&);
   void change_battery();
   int get_battery();
   void change_total_moves();
	int get_total_moves();
   
};
#endif