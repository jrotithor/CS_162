/*Program filename: Movie.h
 *Author: Jaydeep Rotithor
 *Date: 4/25/2015
 *Description: contains all of the declarations for the movie class
 *Input: none
 *Output: none
 *
 */
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
using std::string;
class movie{
private:
  string name;
  int stars;
  int num_cast;
  string *cast;
  string rating;
  int copies;
public:
  movie();
  void create_cast(const int&);
  movie(const movie &);
  void operator=(const movie &);
  void set_name(const string &);
  string get_name();
  void set_stars(const int &);
  int get_stars();
  void set_num_cast(const int &);
  int get_num_cast();
  void set_cast_members(const string & , const int &);
  string get_cast_members(const int &);
  void set_rating(const string &);
  string get_rating();
  void set_copies(const int &);
  int get_copies();
  ~movie();





};

#endif
