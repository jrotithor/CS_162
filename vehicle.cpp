#include "vehicle.h"
vehicle::vehicle(int x){
seats = x;

}
int vehicle::get_seats(){

 return seats;
}

int vehicle::get_toll(){
return 20*seats;
}

