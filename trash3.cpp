#include <iostream>
#include<stdexcept>
using namespace std;
string name;
int main(){
try{
   cout << "Hello " << name.at(0) << endl;
}
catch(out_of_range &e){
   cout << "uh, oh, you didn't initialize me" << endl;
}

}
