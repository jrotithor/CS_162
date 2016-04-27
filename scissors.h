/*
Program: scissors.h
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: creates the scissors class
Input: none
output: none

*/
#ifndef SCISSORS_H
#define SCISSORS_H
#include "tool.h"
class scissors : public tool{
	private:
	int strength;
	public:
	scissors();
	scissors(const int&);
	void set_strength(const int &);
	int get_strength();
	scissors(const scissors&);
	int fight(const char&, const char&, const int&);
	void operator=(const scissors&);
	~scissors();
	
	
	
};

#endif
