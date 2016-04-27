/*
Program: tool.h
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: creates the tool class
Input: none
output: none

*/
#ifndef TOOL_H
#define TOOL_H
class tool{
	private:
  int strength;	
  char type;
  public:
  void set_strength(const int &);
  public:
  tool();
  tool(const tool&);
  void operator=(const tool&);
	
	~tool();
	
};
#endif