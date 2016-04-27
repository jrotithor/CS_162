/*Program filename: main_rental.cpp
 * Author: Jaydeep Rotithor
 * Date: 4/25/2015
 *Description: contains the main function for the netflix database
 *input: movie information
 *Output: either a movie to rent or the movie printed to a text file
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include "./netflix.h"
#include "./movie.h"
using namespace std;
/*Function: main
 *Description: executes all of the functions in the netflix and movie classes
 *Parameters: none
 *pre-conditions: the user has input to enter or a movie to look for
 *post-conditions: a movie will be put in a .dat file of printed for the user
 */
int main(){
   ofstream output;
   output.open("netflix.dat", ios::in | ios::out | ios::app);
   int x;
   string name1;
   int stars;
   int castmembers;
   string rating;
   int copies;
   int movienum;
   string member;
   int rented = 0;
   int j = 0;
   bool y = true;
   while(y == true){
      cout << "Do you want to enter a movie to the database or find a movie to rent?(1 - enter, 2 - find, or 0 - exit)" << endl;
      cin >> x;

      while(x > 2 || x < 0 || cin.fail()){
	 cout << "that is not a valid input. please try again: " << endl;
	 cin.clear();
	 cin.ignore();
	 cin >> x;
      }
      if(x == 0){
	 return 0;
      }
      else if(x == 1){
	 netflix n1;
	 cout << "How many movies do you want to enter to the database?" << endl;
	 cin >> movienum;
	 while(cin.fail()){
	    cout << "the input is invalid, try again: ";
	    cin.clear();
	    cin.ignore();
	    cin >> movienum;
	 }
	 n1.change_num_movies(movienum);
	 n1.allocate_movie(movienum);
	 for(movienum; movienum > 0; movienum--){
	    movie m1;
	    cout << "Enter the name of your movie" << endl;
	    cin.ignore();
	    getline(cin, name1);
	    m1.set_name(name1);
	    cout << "How many stars? " << endl;
	    cin >> stars;
	    while(cin.fail()){
	       cout << "the input is invalid, try again: ";
	       cin.clear();
	       cin.ignore();
	       cin >> stars;
	    }
	    m1.set_stars(stars);
	    cout << "How many castmembers?" << endl;
	    cin >> castmembers;
	    while(cin.fail()){
	       cout << "the input is invalid, try again: ";
	       cin.clear();
	       cin.ignore();
	       cin >> castmembers;
	    }
	    m1.set_num_cast(castmembers);
	    m1.create_cast(castmembers);
	    cin.ignore();
	    for(int i = 0; i < castmembers; i++){
	       cout << "Enter castmember" << (i+1) <<  endl;
	       getline(cin, member);
	       m1.set_cast_members(member, i);
	    }
	    cout << "Enter the movie rating" << endl;
	    cin >> rating;
	    m1.set_rating(rating);
	    cout << "How many copies of the movie?" << endl;
	    cin >> copies;
	    while(cin.fail() || copies <= 0){
	       cout << "the input is invalid, try again: ";
	       cin.clear();
	       cin.ignore();
	       cin >> copies;
	    }
	    m1.set_copies(copies);
	    n1.set_movie(m1,j);
	    cout << "Added to the database!" << endl;
	    j++;
	    output << "title|";
	    output << m1.get_name();
	    output << "|stars|";
	    output << m1.get_stars();
	    output << "|castsize|";
	    output << m1.get_num_cast();
	    output << "|castmembers|";
	    for(int i = 0; i < m1.get_num_cast(); i++){
	       output << m1.get_cast_members(i);
	       output << '|';
	    }
	    output << "rating|";
	    output << m1.get_rating();
	    output << "|copies|";
	    output << m1.get_copies();
	    output << "|rented|";
	    output << rented;
	    output << "\r\n" << endl;

	 }
      }
      else if(x == 2){
	 int a;
	 int temp;
	 ifstream input;
	 input.open("netflix.dat", ios::in);
	 int b = 0;
	 int u;
	 string t;
	 int star1 = 0;
	 string castsearch;
	 string ratingsearch;
	 bool z = false;
	 char n[256];
	 int count = 0;
	 cout << "Do you want to find movies base on: name(1), number of stars(2), specific cast members(3), or rating(4)? ";
	 cin >> b;
	 while(b < 1 || b > 4 || cin.fail()){
	    cout << "That is not a valid option. Please try again: " << endl;
	    cin.clear();
	    cin.ignore();
	    cin >> b;
	 }
	 if(b == 1){
	    cout << "what is the title of your movie?" << endl;
	    cin >> t;
	   while(input){
	    input.get(n, 256, '|');
	    input.get(n,2);
	    input.get(n,256,'|');
	    if(n == t){
	       cout << "found 1 movie" << endl;
	       input.get(n, 256);   
	       cout << n << endl;
	       cout << "Do you want to rent this this movie?(enter 1 for yes, 0 for no)" << endl;
	       cin >> u;
	       while((u != 0 && u != 1) || cin.fail()){
		  cout << "The input is invalid. try again: " << endl;
		  cin.clear();
		  cin.ignore();
		  cin >> u;
	       }
	       if(u == 1){
		  if(copies == 0)
		     cout << "you cannot rent a movie with 0 copies" << endl;
		  else
		  rented += 1;
	       }
	       count++;
	    }
	       input.getline(n,256);
	   }
	    if(count == 0)
	       cout << "Sorry, we couldn't find any movies with that title" << endl;
	 }
	 else if(b == 2){
	    cout << "How many stars does your movie have?" << endl;
	    cin >> star1;
	    while(input){
	    for(int j = 0; j < 3; j++){
	       input.get(n, 256, '|');
	       input.get(n,2);
	    }
	    input.get(n,256, '|');
	    if(atoi(n) == star1){
	       cout << "found 1 movie" << endl;
	       input.get(n,256);
	       cout << n << endl;
	       cout << "Do you want to rent this this movie?(enter 1 for yes, 0 for no)" << endl;
	       cin >> u;
	       while((u != 0 && u != 1) || cin.fail()){
		  cout << "The input is invalid. try again: " << endl;
		  cin.clear();
		  cin.ignore();
		  cin >> u;
	       }
	       if(u == 1){
		  if(copies == 0)
		     cout << "you cannot rent a movie with 0 copies" << endl;
		  else
		  rented += 1;
	       }
	       count++;
	    }
	       input.getline(n,256);
	    }
	    if(count == 0)
	       cout << "Sorry, we couldn't find any movies with that many stars" << endl;

	 }
	 else if(b == 3){
	    cout << "which cast member are you looking for?" << endl;
	    cin >> castsearch;
	    while(input){
	    for(int j = 0; j < 5; j++){
	       input.get(n, 256, '|');
	       input.get(n,2);

	    }
	    input.get(n,256,'|');
	    a = atoi(n);
	    input.get(n,2);
	    input.get(n,256,'|');
	    for(int i = 0; i < a; i++){
	    input.get(n,2);
	       input.get(n,256,'|');
	       if(n == castsearch){
		  z = true;
		  break;
	       }
	       else
		  z = false;
	    }
	    if(z == true){
	       cout << "Found 1 movie" << endl;
	       input.get(n,256);
	       cout << n << endl;
	       cout << "Do you want to rent this this movie?(enter 1 for yes, 0 for no)" << endl;
	       cin >> u;
	       while((u != 0 && u != 1) || cin.fail()){
		  cout << "The input is invalid. try again: " << endl;
		  cin.clear();
		  cin.ignore();
		  cin >> u;
	       }
	       if(u == 1){
		  if(copies == 0)
		     cout << "you cannot rent a movie with 0 copies" << endl;
		  else 
		  rented += 1;
	       }
	       count++;
	    } 
	       input.getline(n,256);
	    }
	    if(count == 0)
	       cout << "Sorry, we couldn't find any movies with that cast member" << endl;
	 }
	 else if(b == 4){
	    cout << "What is the rating of your movie?" << endl;
	    cin >> ratingsearch;
	    while(input){
	    for(int i = 0; i < 5; i++){
	       input.get(n, 256, '|');
	       input.get(n,2);
	    }
	    input.get(n,256, '|');
	       temp = atoi(n);
	    input.get(n,2);
	    for(int j = 0; j < (temp+2); j++){
	       input.get(n, 256, '|');
	       input.get(n,2);
	    }
	    input.get(n,256,'|');
	    if(n == ratingsearch)
	       z = true;
	    else
	       z = false;
	    if(z == true){
	       cout << "found 1 movie" << endl;
	       input.getline(n,256);
	       cout << "Do you want to rent this this movie?(enter 1 for yes, 0 for no)" << endl;
	       cin >> u;
	       while((u != 0 && u != 1) || cin.fail()){
		  cout << "The input is invalid. try again: " << endl;
		  cin.clear();
		  cin.ignore();
		  cin >> u;
		  if(u == 1){
		     if(copies == 0)
			cout << "you cannot rent a movie with 0 copies" << endl;
		     else
		     rented += 1;
		  }
	       }
	       count++;
	    }
	    input.getline(n,256);
	    }
	    if(count == 0)
	       cout << "Sorry, we couldn't find any movies with that rating" << endl;

	 }

      }
   }
}
