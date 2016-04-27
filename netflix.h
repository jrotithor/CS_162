/*Program filename: Netflix.h
 *Author: Jaydeep Rotithor
 *Date: 4/25/2015
 *Description: contains all of the declarations for the netflix class
 *Input: none
 *Output: none.
 */
#ifndef NETFLIX_H
#define NETFLIX_H
#include "./movie.h"
class netflix{


   private:
      movie *m;
      int num_movies;
   public:
      netflix();
      void allocate_movie(const int&);
      netflix(const netflix&);
      netflix(const movie*);
     void operator=(const netflix &);
      void change_num_movies(const int &);
      int get_num_movies();
      void set_movie(const movie&, const int&);
      movie get_movie(const int&);
      ~netflix();
};

#endif
