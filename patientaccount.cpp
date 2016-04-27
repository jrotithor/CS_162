#include <iostream>
#include "./patientaccount.h"
using namespace std;
patientaccount::patientaccount(){
   charges = 0.0;
   rate = 50.00;
};

void patientaccount::update_charges(const float &x, const float &y, const int &d){
  charges += x;
  charges += y;
  charges += d*rate;
  cout << "your charges are now $ " << charges << endl;

}
