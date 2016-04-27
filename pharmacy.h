#ifndef PHARMACY_H
#define PHARMACY_H
#include "patientaccount.h"
#include <string>
using namespace std;
class pharmacy{
 private:
    float cost[5];
    string medications[5];
 public:
    float return_charges(const string &);
    pharmacy();
   ~pharmacy();
};
#endif
