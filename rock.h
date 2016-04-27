/*
Program: rock.h
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: creates the rock class
Input: none
output: none

*/
#ifndef ROCK_H
#define ROCK_H
#include "tool.h"
class rock : public tool{
	private:
	int strength;
	public:
	rock();
	rock(const int &);
	void set_strength(const int &);
	int get_strength();
	rock(const rock&);
	int fight(const char&, const char&, const int&);
  void operator=(const rock&);
	~rock();
	
	
};
#endif
