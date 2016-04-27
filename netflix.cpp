/*Program filename: Netflix.cpp
 *Author: Jaydeep Rotithor
 *Date: 4/25/2015
 *Description: Contains all of the set and get functions associated with the movie class, along with dynamic memory allocation.
 *Input: none
 *Output: none.
 */
#include <iostream>
#include "./netflix.h"

using namespace std;
/*
 *Function: netflix
 *Description: default constructor for netflix
 *Parameters: none
 *Pre-conditions: none
 *post-conditions: a netflix class exists
 */
netflix::netflix(){
   m = NULL;
   num_movies = 0;

}
/*
 *Function: allocate_movie
 *Description: dynamically allocates memory for movies
 *Parameters: the number of movies
 *Pre-conditions: the user entered a number of movies
 *post-conditions: memory is dynamically allocated
 */
void netflix::allocate_movie(const int &x){
  num_movies = x;
   m = new movie[num_movies];

}
/*
 *Function: Change_num_movies
 *Description: changes the number of movies in the netflix class
 *Parameters: the number of movies to be added
 *Pre-conditions: there is a number of movies to add
 *post-conditions: the numner of movies is updated
 */
void netflix::change_num_movies(const int &n_m){
   num_movies += n_m;
}
/*
 *Function: netflix
 *Description: copy constructor for netflix
 *Parameters: a netflix object
 *Pre-conditions: an old netflix class exists
 *post-conditions: a new netflix class exists
 */
netflix::netflix(const netflix &n){
  if(n.num_movies == 0)
     m = NULL;
   else
     m = new movie[num_movies];
  for(int i = 0; i < num_movies; i++)
    m[i] = n.m[i]; 

}
/*
 *Function: operator=
 *Description:assignment operator overload for netflix
 *Parameters: a netflix object
 *Pre-conditions: an old netflix class exists
 *post-conditions: a netflix class is identical to the old netflix class
 */
void netflix::operator=(const netflix &n){
   if(m != NULL)
      delete[] m;
   if(n.num_movies == 0){
      m = NULL;

   }
   else{
      m = new movie[num_movies];
      for(int i = 0; i < num_movies; i++){
	m[i] = n.m[i]; 
      }
   }

}
/*
 *Function: get_num_movies
 *Description: returns the number of movies in netflix
 *Parameters: none
 *Pre-conditions: none
 *post-conditions: the number of movies is returned
 */
int netflix::get_num_movies(){
  return num_movies;
}
/*
 *Function: set_movie
 *Description: updates the movie array
 *Parameters: a movie and a position
 *Pre-conditions: a movie exists
 *post-conditions: the movie is put in the netflix class
 */
void netflix::set_movie(const movie &m1, const int &i){
  // m[i] = m1;

}
/*
 *Function: get_movie
 *Description: returns a movie object
 *Parameters: the position of the movie in the array
 *Pre-conditions: there is a movie in the specified position
 *post-conditions: the movie is returned
 */
movie netflix::get_movie(const int &i){

   return m[i];
}



/*
 *Function: ~netflix
 *Description: destructor for the netflix class
 *Parameters: none
 *Pre-conditions: an array of movies exists
 *post-conditions: the dynamcally allocated memory is freed.
 */
netflix::~netflix(){
   delete [] m;
   m = NULL;
   num_movies = 0;

}
