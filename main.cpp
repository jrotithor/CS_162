#include <iostream>
#include "date.h"
using namespace std;




int main(){
   date d1;
   int x = 0;
   int y = 0;
   string z;
   cout << "Enter month here" << endl;
   cin >> z;
   cout << "Enter day here" << endl;
   cin >> x;
   cout << "Enter year here" << endl;
   cin >> y;
   d1.setdate(x,y,z);
   d1.printdate();

   return 0;

}
