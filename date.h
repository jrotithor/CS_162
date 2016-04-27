#ifndef DATE_H
#define DATE_H
#include<string>
using namespace std;
class date{

   private:
      int day; 
      int year;
      string month;
   public:
      void setdate(int, int, string);
      void printdate();
};
#endif

