#include <iostream>
using namespace std;
//void garbage(int &, int &);
void garbage(int &a, int b){
   a = 55;
   b = 123;
}


int main(){
   int x = 14;
   int y = 13;
   garbage(x,y);
   cout << x << " " <<  y << endl;
   return 0;
}
