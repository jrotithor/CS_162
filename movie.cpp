/*Program filemane: Movie.cpp
 *Author: Jaydeep Rotithor
 *Date: 4/25/2015
 *Description: contains all of the setter and getter functions and dynamic memory allocation of the movie class.
 *Input: none
 *Output: none
 */
#include <iostream>
#include <string>
#include "./movie.h"
using namespace std;
/*
 *Function: movie
 *Description: default constructor for movie
 *Parameters: none
 *Pre-conditions: none
 *post-conditions: a movie object exists
 */
movie::movie(){
   name = "";
   stars = 0;
   num_cast = 0;
   cast = NULL;
   rating = "";
   copies = 0;
}
/*
 *Function: create_cast
 *Description: dynamically allocates memory for the cast
 *Parameters: the number of cast members
 *Pre-conditions: the user has entered a number of castmembers
 *post-conditions: an array of castmembers is created
 */
 void movie::create_cast(const int &c){
   num_cast = c;
   cast = new string[c];
}
/*
 *Function: movie
 *Description: copy constructor for movie
 *Parameters: a movie object
 *Pre-conditions: an old movie object exists
 *post-conditions: a new movie object class exists
 */
movie::movie(const movie &m){
   num_cast = m.num_cast;
   if(num_cast == 0){
      cast = NULL;

   }
   else{
      cast = new string[num_cast];
      for(int i = 0; i < num_cast; i++)
	 cast[i] = m.cast[i];

   }

}
/*
 *Function: operator=
 *Description: assignment overload operator for movie
 *Parameters: a movie object
 *Pre-conditions: an old movie object exists
 *post-conditions: the object is copied into another movie object
 */
void movie::operator=(const movie &m){
   if(cast != NULL)
      delete[] cast;
   num_cast = m.num_cast;
   if(m.num_cast == 0){
      cast = NULL;

   }
   else{
      cast = new string[num_cast];
      for(int i = 0; i < num_cast; i++)
	 cast[i] = m.cast[i];
   }

}
/*
 *Function: set_name
 *Descriptions: sets the name of the movie
 *Parameters: a string
 *Pre-conditions: the uer enters a name
 *post-conditions: the movie name is entered
 */
void movie::set_name(const string &n){
   name = n;
}
/*
 *Function: get_name
 *Descriptions: gets the name of the movie
 *Parameters: none
 *Pre-conditions: the movie has a name
 *post-conditions: the movie name is returned
 */
string movie::get_name(){
   return name;

}
/*
 *Function: set_stars
 *Descriptions: sets the number of stars of the movie
 *Parameters: a number of stars
 *Pre-conditions: the user enters a number of stars
 *post-conditions: the number of stars is entered
 */
void movie::set_stars(const int &s){
   stars = s;
}
/*
 *Function: get_stars
 *Descriptions: gets the number of stars of the movie
 *Parameters: none
 *Pre-conditions: the movie has a number of stars
 *post-conditions: the number of stars is returned
 */
int movie::get_stars(){
   return stars;

}
/*
 *Function: set_num_cast
 *Descriptions: sets the number of castmembers of the movie
 *Parameters: a number of castmembers
 *Pre-conditions: the user enters a number
 *post-conditions: the number of castmembers is entered
 */
void movie::set_num_cast(const int &num){
   num_cast = num;
}
/*
 *Function: get_num_cast
 *Descriptions: gets the number of castmembers of the movie
 *Parameters: none
 *Pre-conditions: the movie has a number of castmembers
 *post-conditions: the number of castmembers is returned
 */
int movie::get_num_cast(){
   return num_cast;
}
/*
 *Function: set_cast_members
 *Descriptions: sets the names of the people int the movie
 *Parameters: a string and an integer
 *Pre-conditions: the user enters a castmember.
 *post-conditions: the castmember is entered in the position in the array specified by the number.
 */
void movie::set_cast_members(const string &c, const int &i){
   cast[i] = c;
}
/*
 *Function: get_cast_members
 *Descriptions: gets the cast_member in the specified slot
 *Parameters: an integer
 *Pre-conditions: a cast member exists in the array
 *post-conditions: the proper castmember is returned.
 */
string movie::get_cast_members(const int &i){
   return cast[i];
}
/*
 *Function: set_rating
 *Descriptions: sets the rating of the movie
 *Parameters: a string
 *Pre-conditions: a rating is put in by the user
 *post-conditions: the movie rating is enteree
 */
void movie::set_rating(const string &r){
   rating = r;
}
/*
 *Function: get_rating
 *Descriptions: gets the rating of the movie
 *Parameters: none
 *Pre-conditions: the movie rating exists
 *post-conditions: the movie rating is returned
 */
string movie::get_rating(){

   return rating;
}
/*
 *Function: set_copies
 *Descriptions: sets the number of copies of the movie
 *Parameters: an integer
 *Pre-conditions: the user has put in a number of copies
 *post-conditions: the number of copies is entered
 */
void movie::set_copies(const int &c){
   copies = c;
}
/*
 *Function: get_copies
 *Descriptions: gets the number of copies of the movie
 *Parameters: none
 *Pre-conditions: the number of copies of the movie exists
 *post-conditions: the number of copies of the movie is returned
 */
int movie::get_copies(){
   return copies;
}
/*
 *Function: ~movie
 *Descriptions: frees the memory allocated for the cast
 *Parameters: none
 *Pre-conditions: an array of castmembers exists
 *post-conditions: the memory block for castmembers is freed
 */
movie::~movie(){
   delete [] cast;
   cast = NULL;
   num_cast = 0;
}




