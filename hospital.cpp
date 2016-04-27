#include <iostream>
#include "patientaccount.h"
#include "pharmacy.h"
#include "surgery.h"
#include <fstream>
using namespace std;
int main(){
   patientaccount p1;
   pharmacy ph1;
   surgery s1;
   string s;
   string med1;
   int day;
   string name;
   cout << "enter your name here: " << endl;
   getline(cin, name);
   cout << "what kind of surgery would you like to have(enter facelift, tonsillectomy, hair transplant, brain surgery, or appendectomy, or any other combination of keys for none)" << endl;
   getline(cin,s);
   cout << "whar kind of medication would you like(enter sleeping pill, aspirin, benadryl, allegra, or Xarelto, or any other combination of keys for none)" << endl;
   getline(cin, med1);
   cout << "how many days would you like to stay for?" << endl;
   cin >> day;
   float x = s1.return_charges(s);
   float y = ph1.return_charges(med1);
   p1.update_charges(x,y,day);

   fstream output;
   output.open("hospital.txt", ios::out | ios::app);
   output << name;
   output << "|pharm|";
   output << med1;
   output << '|';
   output << y;
   output << "|surg|";
   output << s;
   output << '|';
   output << x;
   output << '|';
   output << day;
   output << "\r\n";
   output.close();
   return 0;

}
