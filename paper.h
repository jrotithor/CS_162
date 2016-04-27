/*
Program: paper.h
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: creates the paper class
Input: none
output: none

*/
#ifndef PAPER_H
#define PAPER_H
#include "tool.h"
class paper : public tool{
	private:
	int strength;
	public:
	paper();
	paper(const int&);
	paper(const paper&);
	void set_strength(const int &);
	int get_strength();
		int fight(const char&, const char&, const int&);
	void operator=(const paper&);
    
	~paper();
	
	
};
#endif
