#include <iostream>
#include "./pharmacy.h"
using namespace std;
pharmacy::pharmacy(){
   string m1 = "sleeping pill";
   string m2 = "aspirin";
   string m3 = "benadryl";
   string m4 = "allegra";
   string m5 = "Xarelto";
   medications[0] = m1;
   medications[1] = m2;
   medications[2] = m3;
   medications[3] = m4;
   medications[4] = m5;
   cost[0] = 2.00;
   cost[1] = 35.00;
   cost[2] = 25.00;
   cost[3] = 30.00;
   cost[4] = 100.00;
}
float pharmacy::return_charges(const string &medicine){
   if(medicine == medications[0])
      return cost[0]; 
   else if(medicine == medications[1])
      return cost[1]; 
   else if(medicine == medications[2])
      return cost[2]; 
   else if(medicine == medications[3])
      return cost[3]; 
   else if(medicine == medications[4])
      return cost[4]; 
   else 
      return 0.0;

}
pharmacy::~pharmacy(){

}

