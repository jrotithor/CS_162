/*Filename:a6.cpp
 *Author: Jaydeep Rotithor
 *Date: 3/11/15
 *Description: Takes in movie data and prints it out to the user
 *Input: movie name, stars, castmembers and rating
 *Output: same as input.
 *
 */
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct netflixdata{
   string name;
   int stars;
   string *cast;
   string rating;
};
/*
 *Function: Datarun
 *Description: takes in all of the user's input
 *Parameters: a boolean and the address of castmembers(reference)
Pre_condition: the user has a movie to enter
Post_conditions: the movie data will be entered.
 *
 */
netflixdata datarun(bool again, int &castmembers){
   netflixdata n;
   n.cast = new string[castmembers];
   cout << "Enter the name of your movie: ";
   cin.ignore();
   getline(cin, n.name);
   cout << "How many stars?: ";
   cin >> n.stars;
   while(cin.fail()){
      cin.clear();
      cout << "that's not a number." << endl;
      cin.ignore();
      cout << "How many stars?: ";
      cin >> n.stars;
   }
   cout << "How many castmembers?";
   cin >> castmembers;
   while(cin.fail()){
      cin.clear();
      cout << "that's not a number." << endl;
      cin.ignore();
      cout << "Enter the number of cast members: ";
      cin >> castmembers;
   }
      cin.ignore();
   for(int i = 0; i < castmembers; i++){
      cout << "Enter cast member " << (i + 1) << ": ";
      getline(cin, n.cast[i]);
   }
   cout << "Enter the rating: ";
   cin >> n.rating;
   return n;
}
/*
 *Function: Ouptut
 *Description: prints out movie data.
 *Parameters: the struct netflixdata and the address of castmembers(reference)
Pre_condition: the user has entered a movie
Post_conditions: the movie data will be printed out.
 *
 */
void output(netflixdata a, int &castmembers){

   cout << "Your movie entry is: " << endl;
   cout << "Title: "<< a.name << endl;
   cout << "Stars: " << a.stars << endl;
   cout << "cast: ";
   for(int i = 0; i < castmembers; i++)
      cout << a.cast[i] << ", ";
   cout << "rating: " << a.rating << endl;

}
/*
 *Function: main
 *Description: runs all of the functions
 *Parameters:none
 *Pre-Conditions:the functions work
 *Post-Conditions:all of the functions are executed.
 */
int main(){
   struct netflixdata a;
   int c;
   string b;
   bool x = true;
   cout << "Do you want to enter a movie? ";
   cin >> b;
   string d = "yes";
   if(b != d){
      x = false;
      return 0;
   }
   do{
      a = datarun(x,c);
      output(a,c);
      delete [] a.cast;
      cout << "Do you want to enter a movie? ";
      cin >> b;
      if(b != d)
	 x = false;
   }while(x);




}
