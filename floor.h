/*
Program: floor.h
Author: Jaydeep Rotithor
Date:5/25/2015
Description:contains prototypes for floor class
Input:None
Output:None


*/

#ifndef FLOOR_H
#define FLOOR_H
#include <vector>
#include <string>
using std::string;
using std::vector;
class floor {
 private:
 vector <vector<char> > v;
 int obj_row; 
 int obj_col;
 public:
 floor();
 floor(const int&, const int&);
 void set_v(vector<vector<char> >);
 vector <vector<char> > get_v();
 int get_row();
 int get_col();
 int get_v_size();
 int get_v_cols();
void increase_row();
void increase_col();
void decrease_row();
void decrease_col();
void place_roomba();
void clean_last();
//const int&, const int&
 bool is_at_left_edge();
 bool is_at_right_edge();
 bool is_at_top_edge();
 bool is_at_bottom_edge();
};
#endif