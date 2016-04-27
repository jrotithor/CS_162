#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
using std::string;
class patientaccount{
   friend class pharmacy;
  friend class surgery; 
 private:
    float charges;
       int days;
       float rate;
 public:
       patientaccount();
       void update_charges(const float &, const float &, const int&);

};
#endif
