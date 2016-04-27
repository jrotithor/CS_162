#include "date.h"
#include <iostream>
#include <string>
using namespace std;
void date::setdate(int x, int y, string z){
   month = z;
   year = y;
   day = x;
   if(((month != "January") &&
	    (month != "February") &&
	    (month != "March") &&
	    (month != "April") &&
	    (month != "May") &&
	    (month != "June") &&
	    (month != "July") &&
	    (month != "August") &&
	    (month != "September") &&
	    (month != "October") &&
	    (month != "November") &&
	    (month != "December"))||
	 ((month == "January" && day > 31 || day < 1)||
	  (month == "February" && day >29 || day < 1) ||
	  (month == "March" && day > 31 || day < 1) ||
	  (month == "April" && day >30 || day < 1) ||
	  (month == "May" && day >31 || day < 1) ||
	  (month == "June" && day >30 || day < 1) ||
	  (month == "July" && day >31 || day < 1) ||
	  (month == "August" && day >31 || day < 1) ||
	  (month == "September" && day >30 || day < 1) ||
	  (month == "October" && day >31 || day < 1) ||
	  (month == "November" && day >30 || day < 1) ||
	  (month == "December" && day >31 || day < 1))){
	     day = 1;
	     month = "January";
	     year = 2001;
	  }
}
void date::printdate(){

   int a = 0;
   cout << month << ' ' << day << ',' << ' ' << year << endl;
   cout << day << ' ' << month << ' ' << year << endl;
   if(month == "January")
      a = 1; 
   else if(month == "February")
      a = 2;
   else if(month == "March")
      a = 3;
   else if(month == "April")
      a = 4;
   else if(month == "May")
      a = 5;
   else if(month == "June")
      a = 6;
   else if(month == "July")
      a = 7;
   else if(month == "August")
      a = 8;
   else if(month == "September")
      a = 9;
   else if(month == "October")
      a = 10;
   else if(month == "November")
      a = 11;
   else if(month == "December")
      a = 12;
   cout << a << '/' << day << '/' << year << endl;
}
