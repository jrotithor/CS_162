#include <iostream>
#include "vehicle.h"
#include "bike.h"
#include "motorcycle.h"
#include "skateboard.h"
#include "car.h"

using namespace std;
int main(){
   vehicle v(4);
   bike b(1);
   vehicle *vptr = &b;



   return 0;
}
